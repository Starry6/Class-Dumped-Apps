@interface BDASifXBridgeLaunchWXMiniProMethodParamModel : BDXBridgeModel
@property (nonatomic) NSString userName;
@property (nonatomic) NSString path;
@property (nonatomic) NSString tag;
@property (nonatomic) NSString refer;
@property (nonatomic) NSDictionary extra;
- (id)refer;
- (void)setExtra:;
- (void)setRefer:;
- (id)path;
- (id)tag;
- (id)extra;
- (id)userName;
- (void)setPath:;
- (void)setTag:;
- (void)setUserName:;
- (void).cxx_destruct;
+ (id)JSONKeyPathsByPropertyKey;
@end
