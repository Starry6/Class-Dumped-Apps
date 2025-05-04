@interface AWEPayIconNameStackView : UIStackView
@property (nonatomic) UILabel nameLabel;
@property (nonatomic) UILabel maskNameLabel;
@property (nonatomic) UIImageView iconImageView;
@property (nonatomic) double maxWidth;
@property (nonatomic) NSString iconUrl;
- (id)iconUrl;
- (void)setIconUrl:;
- (id)maskNameLabel;
- (void)updateWithIconUrl:placeholder:completion:;
- (void)updateWithName:maskName:;
- (id)initWithIconUrl:placeholder:name:maskName:maxWidth:;
- (void)updateWithIconUrl:placeholder:name:maskName:completion:;
- (void)setMaskNameLabel:;
- (double)maxWidth;
- (id)iconImageView;
- (id)nameLabel;
- (void)setMaxWidth:;
- (void).cxx_destruct;
- (void)setIconImageView:;
- (void)setNameLabel:;
- (void)setupUI;
- (void)updateNameLabel;
@end
