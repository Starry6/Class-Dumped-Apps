@interface AWEHotSpotPostEntranceView : UIView
@property (nonatomic) UIImageView iconImageView;
@property (nonatomic) UIImageView arrowImageView;
@property (nonatomic) UILabel despLabel;
@property (nonatomic) @? postHandleBlock;
- (void)configureUI;
- (void)recoverNormalBGColor;
- (id)despLabel;
- (void)setDespLabel:;
- (void)postViewTapped;
- (id)postHandleBlock;
- (void)setPostHandleBlock:;
- (id)initWithFrame:;
- (id)iconImageView;
- (void).cxx_destruct;
- (void)setIconImageView:;
- (id)arrowImageView;
- (void)setArrowImageView:;
+ (id)postEntranceView;
@end
