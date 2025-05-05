@interface BDXBridgeReportALogCodePosition : BDXBridgeModel
@property (nonatomic) NSString file;
@property (nonatomic) NSString function;
@property (nonatomic) NSNumber line;
- (id)function;
- (void)setFunction:;
- (void)setFile:;
- (id)file;
- (void).cxx_destruct;
- (id)line;
- (void)setLine:;
+ (id)requiredKeyPaths;
+ (id)JSONKeyPathsByPropertyKey;
@end
