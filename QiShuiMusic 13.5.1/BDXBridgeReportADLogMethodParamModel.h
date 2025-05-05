@interface BDXBridgeReportADLogMethodParamModel : BDXBridgeModel
@property (nonatomic) NSString label;
@property (nonatomic) NSString tag;
@property (nonatomic) NSString refer;
@property (nonatomic) NSString groupID;
@property (nonatomic) NSString creativeID;
@property (nonatomic) NSString logExtra;
@property (nonatomic) NSDictionary extraParams;
- (void)setExtraParams:;
- (id)extraParams;
- (id)logExtra;
- (id)refer;
- (void)setCreativeID:;
- (void)setLogExtra:;
- (void)setRefer:;
- (void)setGroupID:;
- (id)groupID;
- (id)tag;
- (void)setLabel:;
- (id)label;
- (void)setTag:;
- (void).cxx_destruct;
- (id)creativeID;
+ (id)requiredKeyPaths;
+ (id)JSONKeyPathsByPropertyKey;
@end
