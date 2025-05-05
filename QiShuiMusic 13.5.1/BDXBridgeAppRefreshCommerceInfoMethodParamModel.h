@interface BDXBridgeAppRefreshCommerceInfoMethodParamModel : BDXBridgeModel
@property (nonatomic) NSString reason;
@property (nonatomic) NSArray includes;
@property (nonatomic) NSDictionary extra;
- (void)setExtra:;
- (id)extra;
- (id)reason;
- (void)setReason:;
- (void).cxx_destruct;
- (void)setIncludes:;
- (id)includes;
+ (id)requiredKeyPaths;
+ (id)JSONKeyPathsByPropertyKey;
@end
