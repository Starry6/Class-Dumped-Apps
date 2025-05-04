@interface AWEPaidStreamIAAGetSendAwardConfigV2ResultData : AWEBaseApiModel
@property (nonatomic) NSArray ADConfigList;
@property (nonatomic) BOOL hasMore;
@property (nonatomic) q cursor;
@property (nonatomic) q errorCode;
@property (nonatomic) NSString errorMessage;
@property (nonatomic) NSString logID;
- (id)ADConfigList;
- (void)setADConfigList:;
- (long long)cursor;
- (void)setErrorCode:;
- (long long)errorCode;
- (void)setHasMore:;
- (id)errorMessage;
- (BOOL)hasMore;
- (void)setCursor:;
- (void).cxx_destruct;
- (void)setErrorMessage:;
- (id)logID;
- (void)setLogID:;
+ (id)ADConfigListJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;
@end
