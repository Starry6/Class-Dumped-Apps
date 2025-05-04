@interface AWEYAPTransferAccountsYAPStatusModel : AWEBaseApiModel
@property (nonatomic) NSString bizCode;
@property (nonatomic) NSString bizMsg;
@property (nonatomic) Q yapStatus;
@property (nonatomic) q retryDuration;
@property (nonatomic) BOOL continueQuery;
- (id)bizCode;
- (unsigned long long)yapStatus;
- (BOOL)continueQuery;
- (long long)retryDuration;
- (void)setBizCode:;
- (id)bizMsg;
- (void)setYapStatus:;
- (void)setContinueQuery:;
- (void)setBizMsg:;
- (void)setRetryDuration:;
- (void).cxx_destruct;
+ (id)JSONKeyPathsByPropertyKey;
@end
