@interface AWELiveStatusTagView : UIView
@property (nonatomic) UIView backgroundView;
@property (nonatomic) UIView splitLineView;
@property (nonatomic) UIImageView iconImageView;
@property (nonatomic) UILabel contentLabel;
@property (nonatomic) UILabel liveTipsLabel;
@property (nonatomic) @? tapBlock;
- (void)setTapBlock:;
- (id)tapBlock;
- (id)liveTipsLabel;
- (void)setLiveTipsLabel:;
- (void)initUIWithType:nickName:;
- (id)splitLineView;
- (id)initWithType:nickName:;
- (void)setSplitLineView:;
- (void)setBackgroundView:;
- (id)backgroundView;
- (id)iconImageView;
- (void).cxx_destruct;
- (void)setIconImageView:;
- (id)contentLabel;
- (void)setContentLabel:;
- (void)tapAction;
@end
