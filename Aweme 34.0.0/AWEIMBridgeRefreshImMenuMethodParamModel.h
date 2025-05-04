@interface AWEIMBridgeRefreshImMenuMethodParamModel : BDXBridgeModel
@property (nonatomic) NSString menuList;
@property (nonatomic) NSNumber fatherPosition;
@property (nonatomic) NSNumber sonPosition;
- (id)menuList;
- (void)setMenuList:;
- (id)fatherPosition;
- (void)setFatherPosition:;
- (id)sonPosition;
- (void)setSonPosition:;
- (void).cxx_destruct;
+ (id)requiredKeyPaths;
+ (id)JSONKeyPathsByPropertyKey;
@end
