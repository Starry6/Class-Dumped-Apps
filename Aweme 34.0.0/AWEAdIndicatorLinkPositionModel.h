@interface AWEAdIndicatorLinkPositionModel : MTLModel
@property (nonatomic) AWEAdIndicatorLinkCoordinateModel coordinate;
@property (nonatomic) NSNumber timestampMS;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)timestampMS;
- (void)setTimestampMS:;
- (id)coordinate;
- (void)setCoordinate:;
- (void).cxx_destruct;
+ (id)coordinateJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;
@end
