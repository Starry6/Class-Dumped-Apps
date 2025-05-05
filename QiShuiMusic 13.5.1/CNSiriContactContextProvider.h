@interface CNSiriContactContextProvider : NSObject
@property (nonatomic) CNContact contact;
@property (nonatomic) CNContactStore store;
@property (nonatomic) BOOL isEnabled;
- (id)getCurrentContext;
- (void)dealloc;
- (void)setStore:;
- (id)contact;
- (void)setContact:;
- (id)defaultContextManager;
- (BOOL)allowContextProvider:;
- (void)setEnabled:;
- (void).cxx_destruct;
- (id)store;
- (void)setIsEnabled:;
- (BOOL)isEnabled;
- (void)_removeContextProviderOnMainThread;
- (id)initWithContact:store:;
+ (id)descriptorForRequiredKeys;
@end
