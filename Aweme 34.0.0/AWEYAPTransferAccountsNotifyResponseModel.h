@interface AWEYAPTransferAccountsNotifyResponseModel : AWEBaseApiModel
@property (nonatomic) NSNumber bizCode;
@property (nonatomic) NSString bizMsg;
@property (nonatomic) NSNumber notifyStatus;
- (id)bizCode;
- (void)setBizCode:;
- (id)bizMsg;
- (void)setBizMsg:;
- (void)setNotifyStatus:;
- (void).cxx_destruct;
- (id)notifyStatus;
+ (id)JSONKeyPathsByPropertyKey;
@end
