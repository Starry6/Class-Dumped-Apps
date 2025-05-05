@interface IESLiveIMUnifiedClientRegisterModel : NSObject
@property (nonatomic) q uniqueId;
@property (nonatomic) q bizToken;
@property (nonatomic) BOOL isRegister;
@property (nonatomic) double timeout;
@property (nonatomic) double createTime;
@property (nonatomic) NSString statusMessage;
- (long long)bizToken;
- (BOOL)isRegister;
- (BOOL)isTimeoutRegisterModel;
- (void)setBizToken:;
- (void)setIsRegister:;
- (id)init;
- (long long)uniqueId;
- (double)createTime;
- (void)setUniqueId:;
- (void)setTimeout:;
- (void).cxx_destruct;
- (void)setCreateTime:;
- (double)timeout;
- (id)statusMessage;
- (void)setStatusMessage:;
@end
