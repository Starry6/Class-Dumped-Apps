@interface LynxLazyRegister : NSObject
- (void)startTasksForKey:;
- (id)init;
+ (void)loadLynxInitTask;
+ (id)sharedInstance;
+ (void)loadImage;
@end
