@interface AWEPushSettingActivityModel : NSObject
@property (nonatomic) NSString activityId;
@property (nonatomic) NSString token;
@property (nonatomic) NSString enterFrom;
@property (nonatomic) BOOL forceShowGuide;
- (void)setEnterFrom:;
- (id)enterFrom;
- (void)setForceShowGuide:;
- (BOOL)forceShowGuide;
- (void).cxx_destruct;
- (void)setToken:;
- (id)token;
- (id)activityId;
- (void)setActivityId:;
@end
