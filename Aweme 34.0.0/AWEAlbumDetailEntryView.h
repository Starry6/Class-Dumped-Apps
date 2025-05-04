@interface AWEAlbumDetailEntryView : UIView
@property (nonatomic) Q style;
@property (nonatomic) NSString title;
@property (nonatomic) UIView containerView;
@property (nonatomic) UILabel contentLabel;
- (void)updateWithCurrentIndex:totalCount:;
- (id)initWithStyle:title:;
- (id)initWithFrame:;
- (id)containerView;
- (unsigned long long)style;
- (void)setContainerView:;
- (void).cxx_destruct;
- (id)title;
- (void)setTitle:;
- (void)setStyle:;
- (void)setupUI;
- (id)contentLabel;
- (void)setContentLabel:;
@end
