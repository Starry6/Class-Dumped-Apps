@interface AWEPaySwiftImpl.BusinessNetworkGateway : MTLModel
@property (nonatomic) NSString logID;
@property (nonatomic) q serverTimeUseMS;
- (long long)serverTimeUseMS;
- (void)setServerTimeUseMS:;
- (id)initWithDictionary:error:;
- (id)init;
- (void).cxx_destruct;
- (id)initWithCoder:;
- (id)logID;
- (void)setLogID:;
+ (id)JSONKeyPathsByPropertyKey;
@end
