@interface AWEDislikeWithDrawPanelView : UIView
@property (nonatomic) <AWEDislikeWithDrawPanelDelegate> delegate;
@property (nonatomic) UIView container;
@property (nonatomic) UIImageView dislikeImageView;
@property (nonatomic) UILabel textLabel;
@property (nonatomic) UILabel subTextLabel;
@property (nonatomic) DUXButton cancelButton;
- (void)cancelButtonDidClick;
- (id)dislikeImageView;
- (void)setDislikeImageView:;
- (void)setSubTextLabel:;
- (id)textLabel;
- (void)setContainer:;
- (id)container;
- (id)init;
- (void)setCancelButton:;
- (id)delegate;
- (id)cancelButton;
- (void).cxx_destruct;
- (void)setDelegate:;
- (void)setTextLabel:;
- (void)setupUI;
- (id)subTextLabel;
@end
