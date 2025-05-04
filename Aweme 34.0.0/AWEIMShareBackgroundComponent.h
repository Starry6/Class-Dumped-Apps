@interface AWEIMShareBackgroundComponent : AWEIMFlexComponent
@property (nonatomic) q scene;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)componentDidMounted:;
- (void)cellWillDisplay:;
- (id)baseVC;
- (void)didTapShareBackgroundCover:;
- (id)displayMessage;
- (void)setScene:;
- (long long)scene;
+ (BOOL)canCreateComponentWithContext:;
@end
