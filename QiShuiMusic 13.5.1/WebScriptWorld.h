@interface WebScriptWorld : NSObject
- (id)init;
- (void)dealloc;
- (id)initWithWorld:;
- (void)unregisterWorld;
+ (id)world;
+ (id)standardWorld;
+ (id)scriptWorldForGlobalContext:;
+ (id)scriptWorldForJavaScriptContext:;
+ (id)findOrCreateWorld:;
@end
