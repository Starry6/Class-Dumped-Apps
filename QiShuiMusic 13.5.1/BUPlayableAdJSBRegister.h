@interface BUPlayableAdJSBRegister : NSObject
@property (nonatomic) <BUPlayableAdJSBRegisterDelegate> delegate;
- (id)plugin:excuteJSBMethod:params:;
- (BOOL)plugin:responseToJSBMethod:;
- (void)registerPlugins:delegate:;
- (void)setDelegate:;
- (id)delegate;
- (void).cxx_destruct;
- (void)registerPlugin:;
@end
