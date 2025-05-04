@interface AWEIMStrangerGreetingContentComponent : AWEIMFlexComponent
@property (nonatomic) BOOL didCheckSender;
@property (nonatomic) q scene;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)closeButtonClicked;
- (void)componentDidMounted:;
- (void)cellWillDisplay:;
- (id)baseVC;
- (void)sendSelectEmojiWithGreetingEmoticon:andShowedIndex:;
- (void)willDisplayEmojiWithGreetingEmoticon:showedIndex:props:;
- (BOOL)didCheckSender;
- (void)setDidCheckSender:;
- (id)displayMessage;
- (void)setScene:;
- (long long)scene;
- (void)deleteMessage;
+ (BOOL)canCreateComponentWithContext:;
@end
