@interface IMTimingCollection : NSObject
- (id)init;
- (void)stopTimingForKey:;
- (void)startTimingForKey:;
- (double)totalTimeForKey:;
- (void)removeTimingForKey:;
- (void).cxx_destruct;
- (id)description;
- (BOOL)hasKey:;
+ (id)IMCoreSetupTimingCollection;
+ (void)IMCoreSetupTimingCollectionEnd;
@end
