@interface AWESearchMerchandiseNoResultView : UIView
@property (nonatomic) AWESearchNoResultModel model;
@property (nonatomic) NSDictionary publicTrackParams;
@property (nonatomic) UIImageView emptyImage;
@property (nonatomic) UILabel noResultLabel;
@property (nonatomic) UIButton redirectButton;
- (void)configureUI;
- (id)noResultLabel;
- (id)redirectButton;
- (void)jumpToMerchandisePage:;
- (id)publicTrackParams;
- (void)setPublicTrackParams:;
- (void)setNoResultLabel:;
- (void)setRedirectButton:;
- (void)setModel:;
- (id)initWithFrame:;
- (id)model;
- (void).cxx_destruct;
- (void)layoutSubviews;
- (id)emptyImage;
- (void)updateWithModel:;
- (void)setEmptyImage:;
@end
