@interface CLRouteBoundingBox : NSObject
@property (nonatomic) double minLatitude;
@property (nonatomic) double maxLatitude;
@property (nonatomic) double minLongitude;
@property (nonatomic) double maxLongitude;
@property (nonatomic) NSInteger nRows;
@property (nonatomic) NSInteger nColumns;
- (id)initWithCoder:;
- (void)encodeWithCoder:;
- (id)copyWithZone:;
- (id)initWithMinLatitude:maxLatitude:minLongitude:maxLongitude:nRows:nColumns:;
- (double)minLatitude;
- (double)maxLatitude;
- (double)minLongitude;
- (double)maxLongitude;
- (int)nRows;
- (int)nColumns;
+ (BOOL)supportsSecureCoding;
@end
