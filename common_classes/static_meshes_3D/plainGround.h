#pragma once

// STL
#include <string>

// GLM
#include <glad/glad.h>
#include <glm/glm.hpp>

// Project
#include "../vertexBufferObject.h"
#include "../texture.h"

#include "staticMesh3D.h"

namespace static_meshes_3D {

/**
 * Plain ground static mesh.
 */
class PlainGround : public StaticMesh3D
{
public:
    PlainGround(bool withPositions = true, bool withTextureCoordinates = true, bool withNormals = true);

    static glm::vec3 vertices[4]; // Array of mesh vertices
    static glm::vec2 textureCoordinates[4]; // Array of mesh texture coordinates

    void render() const override;

protected:
    virtual void initializeData() override;
};

} // namespace static_meshes_3D