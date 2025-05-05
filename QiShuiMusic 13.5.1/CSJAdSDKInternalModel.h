@interface CSJAdSDKInternalModel : NSObject
@property (nonatomic) CSJLiveAdCustomConfig liveAdConfig;
- (id)liveAdConfig;
- (void)registerLiveAdCustomConfig:;
- (BOOL)isMemberOfClass:;
- (void).cxx_destruct;
- (BOOL)isKindOfClass:;
+ (id)sharedInstance;
@end
