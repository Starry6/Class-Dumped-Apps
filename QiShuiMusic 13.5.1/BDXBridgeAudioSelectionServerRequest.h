@interface BDXBridgeAudioSelectionServerRequest : BDXBridgeModel
@property (nonatomic) NSString scene;
@property (nonatomic) BOOL need_file_attrs;
- (BOOL)need_file_attrs;
- (void)setNeed_file_attrs:;
- (void)setScene:;
- (id)scene;
- (void).cxx_destruct;
+ (id)requiredKeyPaths;
+ (id)JSONKeyPathsByPropertyKey;
@end
