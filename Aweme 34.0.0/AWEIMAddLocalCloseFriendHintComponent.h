@interface AWEIMAddLocalCloseFriendHintComponent : AWEIMComponentBase
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)didFinishTapTAIsFriendWithUser:isFriend:;
- (void)componentDidMounted:;
- (void)linkTextBehaviorOccursWith:message:;
- (void)dealloc;
+ (BOOL)canCreateComponentWithContext:;
@end
