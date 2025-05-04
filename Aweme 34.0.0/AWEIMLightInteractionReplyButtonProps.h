@interface AWEIMLightInteractionReplyButtonProps : AWEIMUIViewPresenterProps
@property (nonatomic) @? tapAction;
@property (nonatomic) NSURL iconURL;
@property (nonatomic) NSString iconTitle;
@property (nonatomic) UIImage iconPlaceholder;
- (void)setIconTitle:;
- (void)setIconURL:;
- (id)iconURL;
- (void).cxx_destruct;
- (id)iconTitle;
- (id)tapAction;
- (id)iconPlaceholder;
- (void)setIconPlaceholder:;
- (void)setTapAction:;
@end
