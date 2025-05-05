@interface IESLivePKAnchorCancelPanel : HTSLivePopUpView
@property (nonatomic) @? actionBlock;
@property (nonatomic) NSString actionStr;
@property (nonatomic) NSString cancelStr;
@property (nonatomic) NSString content;
@property (nonatomic) NSAttributedString attributedContent;
- (void)actionButtonDidClick:;
- (id)actionStr;
- (id)attributedContent;
- (void)cancelButtonDidClick:;
- (id)cancelStr;
- (id)initWithFrame:content:cancel:action:;
- (void)setActionStr:;
- (void)setAttributedContent:;
- (void)setCancelStr:;
- (void)trackWithAction:;
- (id)content;
- (void)setContent:;
- (id)actionBlock;
- (void).cxx_destruct;
- (void)setActionBlock:;
- (void)layoutUI;
@end
