@interface BUStaticPlugin : NSObject
@property (nonatomic) NSMutableDictionary nativeInvocations;
- (BOOL)callHandlerWithCommand:engine:completion:;
- (id)nativeInvocations;
- (void)registerHandlerBlock:forMethodName:;
- (void)setNativeInvocations:;
- (id)init;
- (void).cxx_destruct;
@end
