@interface AWESearchAIGCInputVideoRSCell : UITableViewCell
@property (nonatomic) UIView borderContainerView;
@property (nonatomic) UILabel queryTextLabel;
@property (nonatomic) UIImageView queryImageView;
@property (nonatomic) UITapGestureRecognizer tapGesture;
@property (nonatomic) AWESearchAIGCVideoRSModel model;
@property (nonatomic) <AWESearchAIGCInputVideoRSCellDelegate> delegate;
- (id)borderContainerView;
- (void)setBorderContainerView:;
- (id)queryTextLabel;
- (id)queryImageView;
- (void)videoRSCellTouched:;
- (void)setQueryTextLabel:;
- (void)setQueryImageView:;
- (void)setModel:;
- (id)delegate;
- (id)model;
- (id)initWithStyle:reuseIdentifier:;
- (void).cxx_destruct;
- (void)setDelegate:;
- (id)tapGesture;
- (void)setTapGesture:;
- (void)updateWithModel:;
+ (double)viewHeightWithModel:;
+ (id)queryTextLabelFont;
+ (id)identifier;
@end
