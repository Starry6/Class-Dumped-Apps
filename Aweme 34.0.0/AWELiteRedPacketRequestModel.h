@interface AWELiteRedPacketRequestModel : NSObject
@property (nonatomic) NSString enterFrom;
@property (nonatomic) BOOL isRetry;
@property (nonatomic) Q retryRequestCount;
@property (nonatomic) BOOL isLostUser;
@property (nonatomic) NSString storeKey;
@property (nonatomic) @? continueBlock;
- (void)setEnterFrom:;
- (id)enterFrom;
- (BOOL)isLostUser;
- (void)setIsLostUser:;
- (unsigned long long)retryRequestCount;
- (void)setRetryRequestCount:;
- (id)storeKey;
- (void)setStoreKey:;
- (void).cxx_destruct;
- (id)continueBlock;
- (void)setContinueBlock:;
- (BOOL)isRetry;
- (void)setIsRetry:;
+ (id)defaultRequestModel;
@end
