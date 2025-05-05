@interface BDXBridgeGetLocationMethodResultModel : BDXBridgeModel
@property (nonatomic) BOOL enable;
@property (nonatomic) NSNumber latitude;
@property (nonatomic) NSNumber longitude;
- (BOOL)enable;
- (id)latitude;
- (void)setLatitude:;
- (void)setLongitude:;
- (void).cxx_destruct;
- (id)longitude;
- (void)setEnable:;
+ (id)JSONKeyPathsByPropertyKey;
@end
