#include "CommonHeader.h"
#include "VertexFormats.h"

//////////////////////////////////////////////////////////////////////////
// Position and Colour
//////////////////////////////////////////////////////////////////////////
Vertex_Pos3fColour4ub::Vertex_Pos3fColour4ub() :
	pos(0.f, 0.f, 0.f)
{
}

Vertex_Pos3fColour4ub::Vertex_Pos3fColour4ub(const DirectX::XMFLOAT3 &posArg, VertexColour colourArg) :
	pos(posArg.x, posArg.y, posArg.z),
	colour(colourArg)
{
}

const D3D11_INPUT_ELEMENT_DESC VertexFormatTraits<Vertex_Pos3fColour4ub>::desc[] = {
	{"POSITION", 0, DXGI_FORMAT_R32G32B32_FLOAT, 0, offsetof(Vertex_Pos3fColour4ub, pos), D3D11_INPUT_PER_VERTEX_DATA, 0, },
	{"COLOUR", 0, DXGI_FORMAT_R8G8B8A8_UNORM, 0, offsetof(Vertex_Pos3fColour4ub, colour), D3D11_INPUT_PER_VERTEX_DATA, 0,},
};

//////////////////////////////////////////////////////////////////////////
// Position, Colour and Normal
//////////////////////////////////////////////////////////////////////////

Vertex_Pos3fColour4ubNormal3f::Vertex_Pos3fColour4ubNormal3f() :
	pos(0.f, 0.f, 0.f),
	normal(0.f, 0.f, 0.f)
{
}

Vertex_Pos3fColour4ubNormal3f::Vertex_Pos3fColour4ubNormal3f(const DirectX::XMFLOAT3 &posArg, VertexColour colourArg, const DirectX::XMFLOAT3 &normalArg) :
	pos(posArg.x, posArg.y, posArg.z),
	colour(colourArg),
	normal(normalArg.x, normalArg.y, normalArg.z)
{
}

const D3D11_INPUT_ELEMENT_DESC VertexFormatTraits<Vertex_Pos3fColour4ubNormal3f>::desc[] = {
	{"POSITION", 0, DXGI_FORMAT_R32G32B32_FLOAT, 0, offsetof(Vertex_Pos3fColour4ubNormal3f, pos), D3D11_INPUT_PER_VERTEX_DATA, 0, },
	{"COLOUR", 0, DXGI_FORMAT_R8G8B8A8_UNORM, 0, offsetof(Vertex_Pos3fColour4ubNormal3f, colour), D3D11_INPUT_PER_VERTEX_DATA, 0,},
	{"NORMAL", 0, DXGI_FORMAT_R32G32B32_FLOAT, 0, offsetof(Vertex_Pos3fColour4ubNormal3f, normal), D3D11_INPUT_PER_VERTEX_DATA, 0,},
};

//////////////////////////////////////////////////////////////////////////
// Position, Colour, Normal and Texture 
//////////////////////////////////////////////////////////////////////////

Vertex_Pos3fColour4ubNormal3fTex2f::Vertex_Pos3fColour4ubNormal3fTex2f() :
	pos(0.f, 0.f, 0.f),
	normal(0.f, 0.f, 0.f),
	tex(0.f, 0.f)
{
}

Vertex_Pos3fColour4ubNormal3fTex2f::Vertex_Pos3fColour4ubNormal3fTex2f(const DirectX::XMFLOAT3 &posArg, VertexColour colourArg, const DirectX::XMFLOAT3 &normalArg, const DirectX::XMFLOAT2 &texArg) :
	pos(posArg.x, posArg.y, posArg.z),
	colour(colourArg),
	tex(texArg.x, texArg.y),
	normal(normalArg.x, normalArg.y, normalArg.z)
{
}

const D3D11_INPUT_ELEMENT_DESC VertexFormatTraits<Vertex_Pos3fColour4ubNormal3fTex2f>::desc[] = {
	{"POSITION", 0, DXGI_FORMAT_R32G32B32_FLOAT, 0, offsetof(Vertex_Pos3fColour4ubNormal3fTex2f, pos), D3D11_INPUT_PER_VERTEX_DATA, 0,},
	{"COLOUR", 0, DXGI_FORMAT_R8G8B8A8_UNORM, 0, offsetof(Vertex_Pos3fColour4ubNormal3fTex2f, colour), D3D11_INPUT_PER_VERTEX_DATA, 0,},
	{"NORMAL", 0, DXGI_FORMAT_R32G32B32_FLOAT, 0, offsetof(Vertex_Pos3fColour4ubNormal3fTex2f, normal), D3D11_INPUT_PER_VERTEX_DATA, 0,},
	{"TEXCOORD", 0, DXGI_FORMAT_R32G32_FLOAT, 0, offsetof(Vertex_Pos3fColour4ubNormal3fTex2f, tex), D3D11_INPUT_PER_VERTEX_DATA, 0,},
};

