@interface MBDebugContext : NSObject
@property (nonatomic) q time;
@property (nonatomic) NSDate simulatedDate;
- (id)init;
- (void)dealloc;
- (long long)time;
- (id)description;
- (void)setFlag:;
- (id)simulatedDate;
- (void)setSimulatedDate:;
- (BOOL)isFlagSet:;
- (void)setValue:forName:;
- (void)removeValueForName:;
- (id)valueForName:;
- (void)setBool:forName:;
- (BOOL)boolForName:;
- (void)setInt:forName:;
- (int)intForName:;
- (void)setDelegate:andSelector:forName:;
- (id)performSelectorForName:;
- (id)performSelectorForName:withObject:;
- (BOOL)eval:;
+ (id)defaultDebugContext;
@end
