@interface BDUGLuckyUser : BDUGLuckyJSONModel
@property (nonatomic) q userID;
@property (nonatomic) q deviceID;
@property (nonatomic) q actID;
@property (nonatomic) q activityID;
@property (nonatomic) q appID;
- (long long)actID;
- (void)setActID:;
- (long long)userID;
- (void)setDeviceID:;
- (long long)deviceID;
- (void)setAppID:;
- (long long)appID;
- (void)setUserID:;
- (long long)activityID;
- (void)setActivityID:;
+ (id)modelCustomPropertyMapper;
@end
