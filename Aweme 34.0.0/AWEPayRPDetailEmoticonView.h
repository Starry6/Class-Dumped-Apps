@interface AWEPayRPDetailEmoticonView : UIView
@property (nonatomic) UILabel titleLabel;
@property (nonatomic) @? emoticonClickBlock;
@property (nonatomic) NSString title;
- (void)p_setupUI;
- (void)updateWithEmotcionList:;
- (id)emoticonClickBlock;
- (void)setEmoticonClickBlock:;
- (void)p_emoticonTapped:;
- (id)initWithFrame:;
- (void)setTitleLabel:;
- (void).cxx_destruct;
- (id)title;
- (id)titleLabel;
- (void)setTitle:;
@end
