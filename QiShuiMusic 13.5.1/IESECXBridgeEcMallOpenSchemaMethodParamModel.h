@interface IESECXBridgeEcMallOpenSchemaMethodParamModel : BDXBridgeModel
@property (nonatomic) NSString schema;
@property (nonatomic) NSString btm;
@property (nonatomic) BOOL autoHalfPage;
@property (nonatomic) NSString mallSchema;
@property (nonatomic) NSDictionary bcm;
@property (nonatomic) NSString scene;
- (id)bcm;
- (id)btm;
- (void)setBcm:;
- (void)setBtm:;
- (BOOL)autoHalfPage;
- (id)mallSchema;
- (void)setAutoHalfPage:;
- (void)setMallSchema:;
- (id)schema;
- (void)setScene:;
- (id)scene;
- (void)setSchema:;
- (void).cxx_destruct;
+ (id)requiredKeyPaths;
+ (id)JSONKeyPathsByPropertyKey;
@end
