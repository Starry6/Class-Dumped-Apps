@interface BDXBridgeAddShortcutMethodParamModel : BDXBridgeModel
@property (nonatomic) NSString id;
@property (nonatomic) NSString schema;
@property (nonatomic) NSString icon;
@property (nonatomic) NSString name;
@property (nonatomic) NSString middlePageUrl;
- (id)middlePageUrl;
- (void)setMiddlePageUrl:;
- (id)schema;
- (void)setName:;
- (id)id;
- (id)icon;
- (void)setSchema:;
- (void)setIcon:;
- (void).cxx_destruct;
- (id)name;
- (void)setId:;
+ (id)requiredKeyPaths;
+ (id)JSONKeyPathsByPropertyKey;
@end
