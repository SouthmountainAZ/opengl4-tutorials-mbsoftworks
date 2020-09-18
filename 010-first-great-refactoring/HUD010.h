#pragma once

// STL
#include <string>

// Project
#include "../common_classes/OpenGLWindow.h"
#include "../common_classes/HUDBase.h"
#include "../common_classes/texture.h"

/**
  HUD for tutorial 010.
*/
class HUD010 : public HUDBase
{
public:
	const static std::string CHRISTMAS_TREE_TEXTURE_KEY;
	const static std::string SNOWFLAKE_TREE_TEXTURE_KEY;

	HUD010(const OpenGLWindow& window);

	/** \brief  Checks, if blending in HUD is enabled.
	*   \return True, if blending is enabled or false otherwise.
	*/
	bool isBlendingEnabled() const;

	/** \brief  Toggles blending. */
	void toggleBlending();

	/** \brief  Renders HUD. */
	void renderHUD() const override;

private:
	bool _blendingEnabled = true; //!< Flag telling, if blending is enabled

	/** \brief  Gets Christmas tree texture.
	*   \return Christmas tree texture.
	*/
	const Texture& getChristmasTreeTexture() const;

	/** \brief  Gets snowlake texture.
	*   \return snowlake texture.
	*/
	const Texture& getSnowflakeTexture() const;
};
