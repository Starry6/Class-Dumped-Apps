@interface AWESiriIntentDonationManager : NSObject
- (void)processSiriIntentsModel:intentType:;
- (void)makeIntent:intentType:completion:;
- (void)makeEnableBGPlayPlayMediaIntent:completion:;
- (void)makeDisableBGPlayMediaIntent:completion:;
- (void)makeOpenPageIntent:completion:;
- (void)donateIntentWithType:siriIntentsModel:extraTrackParams:;
- (void)deleteIntentWithItemIdentifier:;
- (void)deleteIntentsWithSceneType:;
- (void)deleteAllIntents;
+ (id)sharedInstance;
@end
