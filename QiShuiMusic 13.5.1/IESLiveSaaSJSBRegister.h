@interface IESLiveSaaSJSBRegister : NSObject
@property (nonatomic) NSArray injectedJsbHandlers;
- (id)injectedJsbHandlers;
- (void)registerJSBHandler:;
- (void)registerJSBHandlers:;
- (void)setInjectedJsbHandlers:;
- (id)init;
- (void).cxx_destruct;
+ (id)sharedInstance;
@end
