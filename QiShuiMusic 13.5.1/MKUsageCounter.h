@interface MKUsageCounter : NSObject
- (void)countUsageOfTypeIfNeeded:;
- (id)fieldNameForType:;
- (void)createCountedEventsSetIfNeeded;
- (void).cxx_destruct;
- (void)count:;
+ (id)sharedCounter;
@end
