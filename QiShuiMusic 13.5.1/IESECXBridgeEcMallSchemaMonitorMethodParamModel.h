@interface IESECXBridgeEcMallSchemaMonitorMethodParamModel : BDXBridgeModel
@property (nonatomic) NSString scene;
@property (nonatomic) NSString params;
@property (nonatomic) NSString contextProvider;
@property (nonatomic) NSString scriptPath;
- (void)setScriptPath:;
- (void)setScene:;
- (id)scene;
- (void).cxx_destruct;
- (id)params;
- (void)setParams:;
- (id)contextProvider;
- (void)setContextProvider:;
- (id)scriptPath;
+ (id)requiredKeyPaths;
+ (id)JSONKeyPathsByPropertyKey;
@end
