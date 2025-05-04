@interface AWELivePathTagView : UIView
@property (nonatomic) UIView backgroundView;
@property (nonatomic) UIImageView iconImageView;
@property (nonatomic) UILabel contentLabel;
@property (nonatomic) NSString liveType;
@property (nonatomic) NSString referString;
@property (nonatomic) @? tapBlock;
- (id)referString;
- (void)setReferString:;
- (void)setTapBlock:;
- (id)tapBlock;
- (void)setLiveType:;
- (id)liveType;
- (void)updateByTitle:;
- (void)updateByTitle:fontSize:;
- (id)init;
- (void)dealloc;
- (void)setBackgroundView:;
- (id)backgroundView;
- (id)iconImageView;
- (void).cxx_destruct;
- (double)defaultFontSize;
- (void)setIconImageView:;
- (id)contentLabel;
- (void)setContentLabel:;
- (void)tapAction;
- (void)initUI;
@end
