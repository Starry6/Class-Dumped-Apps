@interface AWECommentPanelContainerSwiftImpl.CommentViewControllerPanelInputViewSetting : NSObject
@property (nonatomic) Q beginInputSource;
@property (nonatomic) BOOL shouldShowDefaultText;
@property (nonatomic) BOOL shouldAutoRiseReplyInputView;
@property (nonatomic) BOOL isForcedToShowInputView;
@property (nonatomic) BOOL isForcedToShowInputViewSync;
@property (nonatomic) BOOL isFromClickEvent;
- (unsigned long long)beginInputSource;
- (void)setBeginInputSource:;
- (BOOL)shouldShowDefaultText;
- (void)setShouldShowDefaultText:;
- (BOOL)shouldAutoRiseReplyInputView;
- (void)setShouldAutoRiseReplyInputView:;
- (BOOL)isForcedToShowInputView;
- (void)setIsForcedToShowInputView:;
- (BOOL)isForcedToShowInputViewSync;
- (void)setIsForcedToShowInputViewSync:;
- (BOOL)isFromClickEvent;
- (void)setIsFromClickEvent:;
- (id)init;
- (id)inputController;
- (void).cxx_destruct;
@end
