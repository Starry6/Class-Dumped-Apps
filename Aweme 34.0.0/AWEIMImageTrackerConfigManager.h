@interface AWEIMImageTrackerConfigManager : NSObject
@property (nonatomic) NSDictionary trackerConfig;
- (id)trackerConfig;
- (void)setTrackerConfig:;
- (long long)getRandomNumberWithMin:max:;
- (BOOL)shouldTrackForScene:;
- (long long)__DIDSamplingBaseForScene:;
- (long long)__eventSamplingBaseForScene:;
- (id)__sceneConfigForScene:;
- (id)init;
- (void).cxx_destruct;
- (id)mutableCopyWithZone:;
- (id)copyWithZone:;
+ (id)sharedInstance;
+ (id)allocWithZone:;
@end
