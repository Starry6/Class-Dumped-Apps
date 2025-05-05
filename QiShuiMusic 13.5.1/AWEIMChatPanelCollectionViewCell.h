@interface AWEIMChatPanelCollectionViewCell : UICollectionViewCell
@property (nonatomic) UIButton button;
@property (nonatomic) UILabel textLabel;
@property (nonatomic) AWEIMChatPanelModel model;
@property (nonatomic) UIImageView tagImageView;
@property (nonatomic) UILabel tagLabel;
- (void)p_addRightTopTagWithImage:text:;
- (void)configWithModel:;
- (void)p_deleteRightTopTag;
- (void)setTagImageView:;
- (void)setTagLabel:;
- (id)tagImageView;
- (id)tagLabel;
- (id)model;
- (id)textLabel;
- (void)setModel:;
- (id)initWithFrame:;
- (id)button;
- (void).cxx_destruct;
- (void)setButton:;
- (void)setTextLabel:;
+ (id)identifier;
@end
