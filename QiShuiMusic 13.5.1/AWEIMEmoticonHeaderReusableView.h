@interface AWEIMEmoticonHeaderReusableView : UICollectionReusableView
@property (nonatomic) UILabel titleLabel;
@property (nonatomic) <AWEIMVerticalEmoticonBaseSessionProtocol> session;
- (void)setTitleWithSession:;
- (void)setSession:;
- (void)setTitleLabel:;
- (void)layoutSubviews;
- (id)initWithFrame:;
- (id)session;
- (void).cxx_destruct;
- (id)titleLabel;
@end
