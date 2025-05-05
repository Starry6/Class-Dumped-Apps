@interface CMElevation : NSObject
@property (nonatomic) CMAltimeterInternal _internal;
- (id)_internal;
- (id)init;
- (void)dealloc;
- (void)startElevationUpdatesWithHandler:;
- (void)stopElevationUpdates;
+ (BOOL)isElevationAvailable;
@end
