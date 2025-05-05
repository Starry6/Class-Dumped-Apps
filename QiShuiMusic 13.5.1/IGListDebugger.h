@interface IGListDebugger : NSObject
+ (id)adapterDescriptions;
+ (void)trackAdapter:;
+ (id)dump;
+ (void)clear;
@end
