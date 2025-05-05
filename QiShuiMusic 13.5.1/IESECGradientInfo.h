@interface IESECGradientInfo : MTLModel
@property (nonatomic) NSArray colors;
@property (nonatomic) NSArray locations;
@property (nonatomic) IESECCoordinateLocation startPoint;
@property (nonatomic) IESECCoordinateLocation endPoint;
@property (nonatomic) IESECCoordinateLocation startPosition;
@property (nonatomic) IESECCoordinateLocation endPosition;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)colors;
- (id)endPoint;
- (void)setEndPoint:;
- (id)startPoint;
- (void)setLocations:;
- (void)setStartPoint:;
- (void)setColors:;
- (id)locations;
- (void).cxx_destruct;
- (id)endPosition;
- (id)startPosition;
- (void)setStartPosition:;
- (void)setEndPosition:;
+ (id)JSONKeyPathsByPropertyKey;
@end
