@interface BDADetailStaticPlugin : NSObject
@property (nonatomic) NSMutableDictionary nativeInvocations;
- (void)callHandlerWithCommand:engine:completion:;
- (id)nativeInvocations;
- (void)registerHandlerBlock:forMethodName:;
- (void)setNativeInvocations:;
- (id)init;
- (void).cxx_destruct;
@end
