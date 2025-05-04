@interface AWEAccountPrivacyExpeAndTrackManager : NSObject
@property (nonatomic) BOOL isEnable;
- (BOOL)isEnable;
- (void)setIsEnable:;
- (void)trackBasicModeActionWithType:;
- (BOOL)isChangePrivacyMode;
- (void)checkIfInDOUYIN;
- (id)aAWEAccountPrivacyTrackManagerAdapter;
- (id)privacyVids;
- (id)init;
+ (Class)aAWEAccountPrivacyTrackManagerAdapterClass;
+ (id)sharedInstance;
@end
