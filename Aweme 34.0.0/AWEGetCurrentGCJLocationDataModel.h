@interface AWEGetCurrentGCJLocationDataModel : IESLiveBridgeModel
@property (nonatomic) NSNumber latitude;
@property (nonatomic) NSNumber longitude;
- (void)setLatitude:;
- (id)latitude;
- (void)setLongitude:;
- (id)longitude;
- (void).cxx_destruct;
+ (id)modelCustomPropertyMapper;
@end
