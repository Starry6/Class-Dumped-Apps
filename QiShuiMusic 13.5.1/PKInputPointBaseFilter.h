@interface PKInputPointBaseFilter : NSObject
- (id)init;
- (void)resetFilter;
- (void)addInputPoint:;
- (id)currentFilteredPoint;
@end
