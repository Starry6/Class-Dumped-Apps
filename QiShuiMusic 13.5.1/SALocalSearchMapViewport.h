@interface SALocalSearchMapViewport : SADomainObject
@property (nonatomic) double eastLongitude;
@property (nonatomic) double northLatitude;
@property (nonatomic) double southLatitude;
@property (nonatomic) double timeInSecondsSinceViewportChanged;
@property (nonatomic) double timeInSecondsSinceViewportEnteredForeground;
@property (nonatomic) NSArray vertices;
@property (nonatomic) double westLongitude;
- (id)groupIdentifier;
- (id)encodedClassName;
- (id)vertices;
- (double)eastLongitude;
- (void)setEastLongitude:;
- (double)northLatitude;
- (void)setNorthLatitude:;
- (double)southLatitude;
- (void)setSouthLatitude:;
- (double)timeInSecondsSinceViewportChanged;
- (void)setTimeInSecondsSinceViewportChanged:;
- (double)timeInSecondsSinceViewportEnteredForeground;
- (void)setTimeInSecondsSinceViewportEnteredForeground:;
- (void)setVertices:;
- (double)westLongitude;
- (void)setWestLongitude:;
+ (id)mapViewport;
+ (id)mapViewportWithDictionary:context:;
@end
