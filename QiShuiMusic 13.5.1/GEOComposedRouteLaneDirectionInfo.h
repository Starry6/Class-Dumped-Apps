@interface GEOComposedRouteLaneDirectionInfo : NSObject
@property (nonatomic) NSInteger direction;
@property (nonatomic) float angle;
- (int)direction;
- (id)initWithCoder:;
- (unsigned long long)hash;
- (void)encodeWithCoder:;
- (float)angle;
- (BOOL)isEqual:;
- (id)initWithLaneArrowHead:;
+ (BOOL)supportsSecureCoding;
@end
