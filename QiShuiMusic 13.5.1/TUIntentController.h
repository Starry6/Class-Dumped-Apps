@interface TUIntentController : NSObject
@property (nonatomic) <TUHandleContactProvider> contactProvider;
- (void).cxx_destruct;
- (id)contactProvider;
- (id)initWithContactProvider:;
- (id)voicemailStartCallIntentByHandleForHandles:;
- (id)personsByHandleForHandles:;
- (id)startCallIntentByHandleForHandles:capability:destinationType:;
+ (long long)tu_INPersonHandleTypeForTUHandleType:;
+ (id)tu_INPersonHandleForTUHandle:label:;
@end
