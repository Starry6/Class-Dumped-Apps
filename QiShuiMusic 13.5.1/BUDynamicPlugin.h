@interface BUDynamicPlugin : NSObject
@property (nonatomic) <BURexxarEngine> engine;
- (id)engine;
- (void)setEngine:;
- (void).cxx_destruct;
+ (id)sharedPlugin;
+ (unsigned long long)authType;
+ (unsigned long long)instanceType;
@end
