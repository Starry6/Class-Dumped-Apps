@interface AWEIMExchangeAnswerContentComponent : AWEIMFlexComponent
@property (nonatomic) q scene;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)needUpdateDisplayWithContextOptions:;
- (void)componentDidMounted:;
- (void)cellWillDisplay:;
- (void)transferToExchangeAnswerWithExchangeAnswerMessage:entrance:enterFrom:showSharePanel:;
- (void)didTapShareBackgroundCover:;
- (id)backgroundUrlStringWithMsg:;
- (id)extraTrackingParams;
- (id)displayMessage;
- (void)setScene:;
- (long long)scene;
- (id)contentSize;
+ (BOOL)canCreateComponentWithContext:;
@end
