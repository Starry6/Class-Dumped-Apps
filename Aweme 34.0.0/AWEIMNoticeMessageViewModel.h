@interface AWEIMNoticeMessageViewModel : AWEIMMessageViewModel
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)willDisplayByMessageVisibleLifeCycle;
- (void)linkTextBehaviorOccursWith:message:;
- (void)setupWithMessage:;
- (void)addKVO;
- (void)__willDisplayManagerOperationLog;
- (void)__transferToUserProfileBehaviorOccursWith:message:;
- (void)dealloc;
@end
