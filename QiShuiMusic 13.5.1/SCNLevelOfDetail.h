@interface SCNLevelOfDetail : NSObject
@property (nonatomic) SCNGeometry geometry;
@property (nonatomic) double screenSpaceRadius;
@property (nonatomic) double worldSpaceDistance;
- (id)geometry;
- (void)dealloc;
- (id)copy;
- (id)initWithCoder:;
- (id)thresholdValue;
- (void)encodeWithCoder:;
- (id)description;
- (id)copyWithZone:;
- (id)__CFObject;
- (double)screenSpaceRadius;
- (double)worldSpaceDistance;
- (void)_setupWithGeometry:thresholdMode:value:;
- (id)initWithGeometry:thresholdMode:lod:;
- (id)initWithGeometry:thresholdMode:thresholdValue:;
- (long long)thresholdMode;
- (void)_customEncodingOfSCNLevelOfDetail:;
- (void)_didDecodeSCNLevelOfDetail:;
+ (BOOL)supportsSecureCoding;
+ (id)levelOfDetailWithGeometry:screenSpaceRadius:;
+ (id)levelOfDetailWithGeometry:worldSpaceDistance:;
@end
