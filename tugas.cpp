#include <GL/glut.h>

typedef struct {
float x,y,z;

} point3D_t;

typedef struct {

int NumberofVertices;
short int pnt[32];

} face_t;

typedef struct {

int NumberofVertices;
point3D_t pnt[100];
int NumberofFaces;
face_t fc[32];

} object3D_t;

object3D_t prisma={5,

{{0,100,0},{100,0,0},{0,0,100},
{-100,0,0},{0,0,-100}},
5,
{{3,{0,1,2}},{3,{0,2,3}},
{3,{0,3,4}},{3,{0,4,1}},
{4,{1,4,3,2}}}};

typedef struct {
    float v[4];
} vector3D_t;

vector3D_t Point2Vector(point3D_t pnt)
{

vector3D_t vec;
vec.v[0]=pnt.x;
vec.v[1]=pnt.y;
vec.v[2]=pnt.z;
vec.v[3]=1.;
return vec;

}

mat=tilting;
for (int i=0; i < prisma.NumberofVertices; i++)
{
vec[i]=Point2Vector(prisma.pnt[i]);
vec[i]=mat*vec[i];
}
for(i=0;i<prisma.NumberofFaces;i++)
{
for(j=0;j<prisma.fc[i].NumberofVertices;j++)
vecbuff[j]=vec[prisma.fc[i].pnt[j]];
for(j=0;j<prisma.fc[i].NumberofVertices;j++)
titik2D[j]=Vector2Point2D(vec[prisma.fc[i].pnt[j]]);
drawPolygon(titik2D,prisma.fc[i].NumberofVertices);
}

//mat=tilting
for(i=0;i<prisma.NumberofVertices;i++)
{
vec[i]=Point2Vector(prisma.pnt[i]);
vec[i]=mat*vec[i];
}

float theta=0.5;
matrix3D_t tilting=rotationXMTX(theta)*rotationYMTX(-theta);

for(i=0;i<prisma.NumberofFaces;i++)
{
for(j=0;j<prisma.fc[i].NumberofVertices;j++)
vecbuff[j]=vec[prisma.fc[i].pnt[j]];
for(j=0;j<prisma.fc[i].NumberofVertices;j++)
titik2D[j]=Vector2Point2D(vec[prismas.fc[i].pnt[j]]);
drawPolygon(titik2D,prisma.fc[i].NumberofVertices);
}

vector3D_t operator ^ (vector3D_t a, vector3D_t b)
{

vector3D_t c;//c=a*b
c.v[0]=a.v[1]*b.v[2]-a.v[2]*b.v[1];
c.v[1]=a.v[2]*b.v[0]-a.v[0]*b.v[2];
c.v[2]=a.v[0]*b.v[1]-a.v[1]*b.v[0];
c.v[3]=1.;
return c;

}

setColor(0,0,1);
for(i=0;i<prisma.NumberofFaces;i++)
{
for(j=0;j<prisma.fc[i].NumberofVertices;j++)
vecbuff[j]=vec[prisma.fc[i].pnt[j]];
NormalVector=(vecbuff[1]-vecbuff[0])^(vecbuff[2]-vecbuff[0]);
normalzi=NormalVector.v[2];
if(normalzi<0.)
{
for(j=0;j<prisma.fc[i].NumberofVertices;j++)
titik2D[j]=Vector2Point2D(vec[prisma.fc[i].pnt[j]]);
drawPolygon(titik2D,prisma.fc[i].NumberofVertices);
}
}

setColor(0,1,1);
for(i=0;i<prisma.NumberofFaces;i++)
{
for(j=0;j<prisma.fc[i].NumberofVertices;j++)
vecbuff[j]=vec[prisma.fc[i].pnt[j]];
NormalVector=(vecbuff[1]-vecbuff[0])^(vecbuff[2]-vecbuff[0]);
normalzi=NormalVector.v[2];
if(normalzi>0.)
{
for(j=0;j<prisma.fc[i].NumberofVertices;j++)
titik2D[j]=Vector2Point2D(vec[prisma.fc[i].pnt[j]]);
drawPolygon(titik2D,prisma.fc[i].NumberofVertices);
}
}

