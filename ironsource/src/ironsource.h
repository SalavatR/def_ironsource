#pragma once
#if defined(DM_PLATFORM_IOS)

extern void Ironsource_Init(const char* api_key, bool gdpr_consent);
extern void Ironsource_ValidateIntegration();

extern void Ironsource_LoadInterstitial();
extern bool Ironsource_IsInterstitialReady();
extern void Ironsource_ShowInterstitial();
extern bool Ironsource_IsRewardedReady();
extern void Ironsource_ShowRewarded();

#endif