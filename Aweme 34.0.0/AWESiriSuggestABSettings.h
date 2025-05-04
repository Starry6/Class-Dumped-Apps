@interface AWESiriSuggestABSettings : NSObject
+ (BOOL)enableSiriSuggest;
+ (BOOL)enableSiriSuggestOnlyPlayScene;
+ (BOOL)enableSiriSuggestWithSceneType:;
+ (BOOL)enableSiriSuggestConfigFromPushService;
+ (BOOL)enableSiriSuggestConfigPlayOnlyHotFeed;
+ (id)siriSuggestConfig;
+ (id)siriSuggestConfigWithSceneType:;
+ (BOOL)p_sceneConfigDisabled;
+ (id)siriSuggestConfigSceneDict;
+ (id)siriSuggestDonationAmountConfig;
+ (BOOL)enableSiriSuggestForceDataRequest;
+ (BOOL)enableSiriSuggestCleanDonateData;
+ (long long)siriSuggestSafetyRetryCount;
+ (BOOL)enableSiriSuggestDonateAsync;
+ (BOOL)enableSiriSuggestConfigForScene:;
+ (BOOL)enableSiriSuggestConfig;
+ (long long)siriSuggestDonationMultiplier:;
+ (double)siriSuggestDonationDelayTime:;
+ (unsigned long long)siriSuggestMultiDelaySendMode:;
+ (id)siriSuggestDonationActionSceneMap:;
+ (BOOL)switchUserActivityDonationToIntentsDonation;
@end
