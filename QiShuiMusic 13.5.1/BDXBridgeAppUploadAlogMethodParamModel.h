@interface BDXBridgeAppUploadAlogMethodParamModel : BDXBridgeModel
@property (nonatomic) NSNumber startTime;
@property (nonatomic) NSNumber endTime;
@property (nonatomic) NSString scene;
- (void)setScene:;
- (void)setStartTime:;
- (void)setEndTime:;
- (id)startTime;
- (id)scene;
- (id)endTime;
- (void).cxx_destruct;
+ (id)requiredKeyPaths;
+ (id)defaultValues;
+ (id)JSONKeyPathsByPropertyKey;
@end
