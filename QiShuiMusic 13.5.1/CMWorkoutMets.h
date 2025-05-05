@interface CMWorkoutMets : NSObject
@property (nonatomic) CMWorkoutMetsInternal _internal;
- (id)_internal;
- (id)init;
- (void)dealloc;
- (void)queryWorkoutMetsWithSessionId:handler:;
+ (BOOL)isAvailable;
@end
