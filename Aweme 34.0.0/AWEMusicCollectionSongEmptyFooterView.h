@interface AWEMusicCollectionSongEmptyFooterView : UIView
@property (nonatomic) UIImageView emptyImageView;
@property (nonatomic) UILabel tipLabel;
@property (nonatomic) UIButton toFindMusicButton;
@property (nonatomic) @? toFindMusicClickBlock;
- (void)configSubviews;
- (id)emptyImageView;
- (void)setEmptyImageView:;
- (void)buttonClick:;
- (id)toFindMusicClickBlock;
- (id)toFindMusicButton;
- (void)setToFindMusicClickBlock:;
- (void)setToFindMusicButton:;
- (id)initWithFrame:;
- (void).cxx_destruct;
- (void)setTipLabel:;
- (id)tipLabel;
@end
