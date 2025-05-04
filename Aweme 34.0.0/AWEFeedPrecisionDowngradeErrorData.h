@interface AWEFeedPrecisionDowngradeErrorData : NSObject
@property (nonatomic) NSString imprID;
@property (nonatomic) NSMutableArray errorCodeArray;
@property (nonatomic) double occurTime;
@property (nonatomic) NSString provider;
- (id)imprID;
- (void)setImprID:;
- (void)setErrorCodeArray:;
- (void)setOccurTime:;
- (id)errorCodeArray;
- (double)occurTime;
- (id)initWithErrorInfo:timestamp:provider:imprId:;
- (void)addErrorCode:timestamp:;
- (id)init;
- (void)setProvider:;
- (id)description;
- (void).cxx_destruct;
- (id)provider;
@end
