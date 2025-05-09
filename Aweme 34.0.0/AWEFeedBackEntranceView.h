@interface AWEFeedBackEntranceView : UIView
@property (nonatomic) TTTAttributedLabel contentLabel;
@property (nonatomic) UIImageView rightImageView;
@property (nonatomic) NSString text;
@property (nonatomic) UIColor highlightColor;
@property (nonatomic) UIColor normalColor;
@property (nonatomic) UIImage image;
@property (nonatomic) NSString imageURL;
@property (nonatomic) UITapGestureRecognizer tapGes;
@property (nonatomic) NSArray modelArray;
@property (nonatomic) <AWEFeedBackEntranceDelegate> delegate;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)attributedLabel:didSelectLinkWithURL:;
- (void)setModelArray:;
- (id)modelArray;
- (void)configContentLabel;
- (id)tapGes;
- (void)imageTapped;
- (void)setImage:imageURL:;
- (void)setNormalTextColor:highlightTextColor:;
- (void)setTapGes:;
- (id)init;
- (id)image;
- (id)delegate;
- (void)setImage:;
- (void)setText:;
- (id)text;
- (void)commonInit;
- (id)normalColor;
- (id)highlightColor;
- (void)setNormalColor:;
- (id)imageURL;
- (void).cxx_destruct;
- (void)setHighlightColor:;
- (void)setDelegate:;
- (void)setImageURL:;
- (id)contentLabel;
- (void)setContentLabel:;
- (id)rightImageView;
- (void)setRightImageView:;
@end
