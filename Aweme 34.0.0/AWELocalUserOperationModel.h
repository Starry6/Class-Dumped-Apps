@interface AWELocalUserOperationModel : AWEBaseApiModel
@property (nonatomic) q opType;
@property (nonatomic) AWELocalDBUserModel user;
- (void)setOpType:;
- (long long)opType;
- (id)user;
- (void)setUser:;
- (void).cxx_destruct;
+ (id)userJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;
@end
