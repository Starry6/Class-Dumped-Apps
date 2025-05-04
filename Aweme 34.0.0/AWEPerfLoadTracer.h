@interface AWEPerfLoadTracer : NSObject
- (id)beginWithName:builder:;
- (void)reportTrace:;
- (id)init;
+ (id)sharedTracer;
+ (BOOL)isEnabled;
@end
