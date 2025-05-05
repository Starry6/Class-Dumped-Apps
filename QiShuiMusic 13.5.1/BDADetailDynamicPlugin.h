@interface BDADetailDynamicPlugin : NSObject
@property (nonatomic) <BDADetailJSBridgeEngine> engine;
- (id)engine;
- (void)setEngine:;
- (void).cxx_destruct;
+ (id)sharedPlugin;
+ (unsigned long long)authType;
+ (unsigned long long)instanceType;
@end
