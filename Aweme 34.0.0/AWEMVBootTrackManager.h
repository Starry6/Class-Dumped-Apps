@interface AWEMVBootTrackManager : NSObject
@property (nonatomic) BOOL hadStart;
- (void)onAppDidActive;
- (void)trackForBackGroundSettingStatus;
- (BOOL)hadStart;
- (void)setHadStart:;
- (id)init;
- (void)setupNotification;
+ (id)sharedInstance;
@end
