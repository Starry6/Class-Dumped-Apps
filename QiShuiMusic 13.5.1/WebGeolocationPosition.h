@interface WebGeolocationPosition : NSObject
- (void)dealloc;
- (id)initWithTimestamp:latitude:longitude:accuracy:;
- (id)initWithGeolocationPosition:;
@end
