@interface AWEIMMessageListMessageDetailComponent : AWEIMComponentBase
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)componentDidMounted:;
- (void)loadMessageDetailWithServerMessageID:completion:;
+ (BOOL)canCreateComponentWithContext:;
@end
