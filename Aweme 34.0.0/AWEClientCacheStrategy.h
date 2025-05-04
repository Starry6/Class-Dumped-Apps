@interface AWEClientCacheStrategy : AWEBaseApiModel
@property (nonatomic) Q action;
@property (nonatomic) q operationReason;
- (long long)operationReason;
- (void)setOperationReason:;
- (void)setAction:;
- (unsigned long long)action;
+ (id)actionReasonJSONTransformer;
+ (id)operationReasonJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;
@end
