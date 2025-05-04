@interface AWEIMServiceChatConfigGlobal : AWEIMComponentBase
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)didFinishLogin;
- (void)componentDidMounted:;
- (void)fetchServiceChatConfigGlobalOpt;
- (void)fetchServiceChatConfigGlobal;
- (void)dealloc;
+ (BOOL)canCreateComponentWithContext:;
+ (void)fetchServiceChatConfigGlobal:completion:;
+ (BOOL)hitServiceContainerRoleIdWhiteList;
@end
