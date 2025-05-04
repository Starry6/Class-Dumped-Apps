@interface AWEMessageReachSideBarNoticeExtraModel : NSObject
@property (nonatomic) NSString bussinessId;
@property (nonatomic) NSArray tempInfoArray;
@property (nonatomic) double noticeSendTime;
- (void)setBussinessId:;
- (id)bussinessId;
- (id)tempInfoArray;
- (double)noticeSendTime;
- (void)setTempInfoArray:;
- (void)setNoticeSendTime:;
- (id)description;
- (BOOL)isValid;
- (void).cxx_destruct;
- (id)initWithDictionary:;
@end
