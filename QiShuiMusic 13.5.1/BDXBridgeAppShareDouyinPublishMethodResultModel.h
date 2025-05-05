@interface BDXBridgeAppShareDouyinPublishMethodResultModel : BDXBridgeModel
@property (nonatomic) q status;
@property (nonatomic) q error_info;
- (long long)error_info;
- (void)setError_info:;
- (void)setStatus:;
- (long long)status;
+ (id)error_infoJSONTransformer;
+ (id)statusJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;
@end
