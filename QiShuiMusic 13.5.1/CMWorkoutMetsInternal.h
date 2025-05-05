@interface CMWorkoutMetsInternal : NSObject
- (id)init;
- (void)dealloc;
- (void)_teardown;
- (void)_queryWorkoutMetsWithSessionId:handler:;
@end
