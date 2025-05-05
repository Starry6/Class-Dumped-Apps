@interface RACScheduler : NSObject
@property (nonatomic) NSString name;
- (id)after:schedule:;
- (id)after:repeatingEvery:withLeeway:schedule:;
- (id)afterDelay:schedule:;
- (void)performAsCurrentScheduler:;
- (id)scheduleRecursiveBlock:;
- (void)scheduleRecursiveBlock:addingToDisposable:;
- (id)initWithName:;
- (id)schedule:;
- (void).cxx_destruct;
- (id)description;
- (id)name;
+ (id)currentScheduler;
+ (BOOL)isOnMainThread;
+ (id)schedulerWithPriority:;
+ (id)schedulerWithPriority:name:;
+ (id)subscriptionScheduler;
+ (id)mainThreadScheduler;
+ (id)scheduler;
+ (id)immediateScheduler;
@end
