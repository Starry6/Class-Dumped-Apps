@interface RxScheduler : NSObject
@property (nonatomic) NSString name;
- (id)after:schedule:;
- (id)after:pschedule:;
- (id)after:repeatingEvery:withLeeway:pschedule:;
- (id)after:repeatingEvery:withLeeway:schedule:;
- (id)afterDelay:pschedule:;
- (id)afterDelay:schedule:;
- (void)performAsCurrentScheduler:;
- (id)pschedule:;
- (id)initWithName:;
- (id)schedule:;
- (void).cxx_destruct;
- (id)description;
- (id)name;
+ (id)currentScheduler;
+ (BOOL)isOnMainThread;
+ (id)schedulerWithPriority:;
+ (id)schedulerWithPriority:name:;
+ (id)schedulerWithQueue:;
+ (id)schedulerWithQueue:name:;
+ (id)schedulerWithRunLoop:;
+ (id)schedulerWithRunLoop:name:;
+ (BOOL)supportRunLoop;
+ (id)scheduler;
+ (id)immediateScheduler;
+ (id)mainScheduler;
@end
