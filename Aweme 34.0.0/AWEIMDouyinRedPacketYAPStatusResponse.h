@interface AWEIMDouyinRedPacketYAPStatusResponse : AWEBaseApiModel
@property (nonatomic) Q yapStatus;
@property (nonatomic) Q businessCode;
@property (nonatomic) NSString businessMsg;
@property (nonatomic) q retryDelay;
@property (nonatomic) BOOL continueQuery;
- (unsigned long long)yapStatus;
- (BOOL)continueQuery;
- (unsigned long long)businessCode;
- (id)businessMsg;
- (void)setBusinessCode:;
- (void)setBusinessMsg:;
- (void)setYapStatus:;
- (void)setContinueQuery:;
- (void)setRetryDelay:;
- (long long)retryDelay;
- (void).cxx_destruct;
+ (id)JSONKeyPathsByPropertyKey;
@end
