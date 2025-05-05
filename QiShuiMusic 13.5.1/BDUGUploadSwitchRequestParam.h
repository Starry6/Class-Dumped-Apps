@interface BDUGUploadSwitchRequestParam : BDUGBaseRequestParam
@property (nonatomic) q uploadSwitchType;
@property (nonatomic) NSString notice;
@property (nonatomic) BDUGPushNotice subdividedNotice;
@property (nonatomic) NSString outAppChangeStatus;
@property (nonatomic) NSString inAppChangeStatus;
- (id)inAppChangeStatus;
- (id)outAppChangeStatus;
- (void)setInAppChangeStatus:;
- (void)setOutAppChangeStatus:;
- (void)setSubdividedNotice:;
- (void)setUploadSwitchType:;
- (id)subdividedNotice;
- (long long)uploadSwitchType;
- (void).cxx_destruct;
- (id)notice;
- (void)setNotice:;
@end
