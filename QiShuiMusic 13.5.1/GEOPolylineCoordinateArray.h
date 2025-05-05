@interface GEOPolylineCoordinateArray : NSObject
@property (nonatomic) Q count;
- (unsigned long long)countByEnumeratingWithState:objects:count:;
- (id)initWithCoder:;
- (void)encodeWithCoder:;
- (void).cxx_destruct;
- (unsigned long long)count;
- (id).cxx_construct;
- (void)addCoordinate:;
- (id)coordinateAtIndex:;
+ (BOOL)supportsSecureCoding;
@end
