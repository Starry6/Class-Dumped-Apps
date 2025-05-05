@interface AXMVisionColorMarker : AXMVisionColor
@property (nonatomic) NSString localizedName;
- (void)setLocalizedName:;
- (id)localizedName;
- (void).cxx_destruct;
- (id)description;
+ (id)colorWithHueDegrees:saturation:brightness:localizedName:;
+ (id)allColorMarkers;
+ (id)closestMarkerToColor:withMaximumThreshold:;
@end
