@interface GEOPolylineCoordinateIterator : NSObject
@property (nonatomic) BOOL isCurrentValid;
@property (nonatomic) {?=If} current;
@property (nonatomic) {?=If} previous;
- (id)previous;
- (id)current;
- (id)initWithRange:;
- (BOOL)isCurrentValid;
- (void)advance;
+ (id)iteratorWithRange:;
@end
