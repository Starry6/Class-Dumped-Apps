@interface AWESiriSuggestService : NSObject
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
+ (BOOL)enableSiriSuggest;
+ (BOOL)enableSiriSuggestOnlyPlayScene;
+ (BOOL)enableSiriSuggestWithSceneType:;
+ (BOOL)enableSiriSuggestConfigFromPushService;
+ (void)donateUserActivityIfNeededWithSceneType:userInfo:extraTrackParams:;
+ (id)sceneTypeWithPlaySceneEnterFrom:;
+ (id)schemeWithSceneType:userInfo:;
+ (BOOL)enableSiriSuggestConfigPlayOnlyHotFeed;
+ (void)donateWidgetSuggestionWithType:;
+ (void)donateWidgetSuggestionWithKind:;
+ (void)donateIntentWithSceneType:siriIntentsConfig:extraTrackParams:;
+ (void)deleteIntentWithIdentifier:extraTrackParams:;
+ (void)donateUserActivityIfNeededWithSceneType:extraTrackParams:;
+ (void)donateUserActivityIfNeededWithSceneTypeUsingUGServer:usingV3:requestScene:timingType:userInfo:extraTrackParams:;
+ (void)donateUserActivityIfNeededWithSceneType:userInfo:extraTrackParams:usingUGServer:usingV3:requestScene:timingType:;
+ (BOOL)enableSiriDonateForSceneType:;
+ (void)clearSiriSuggestIfNeeded:;
@end
