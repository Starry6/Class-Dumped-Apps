@interface AWEIMEditorFinishedView : UIView
@property (nonatomic) ACCButton finishButton;
@property (nonatomic) NSString sendButtonTitle;
@property (nonatomic) AWEEditGradientView grandientView;
@property (nonatomic) BOOL isInStoryPublicPage;
@property (nonatomic) @? actionBlock;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)p_setupUI;
- (void)p_setupLayout;
- (id)sendButtonTitle;
- (void)setSendButtonTitle:;
- (void)setFinishButton:;
- (void)setGrandientView:;
- (id)grandientView;
- (void)finishButtonDidClick;
- (id)initWithSuperView:isInStoryPublicPage:;
- (id)initWithSuperView:title:isInStoryPublicPage:;
- (BOOL)isInStoryPublicPage;
- (void)setIsInStoryPublicPage:;
- (void).cxx_destruct;
- (void)setActionBlock:;
- (id)actionBlock;
- (id)finishButton;
@end
