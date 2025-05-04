@interface AWEPlayInteractionAITextEntranceView : UIView
@property (nonatomic) UILabel aiTextLabel;
@property (nonatomic) UIImageView iconImageV;
@property (nonatomic) UIImageView arrowImageV;
@property (nonatomic) double leftoffset;
@property (nonatomic) double musicInfoWithAIText;
- (void)setIconImageV:;
- (id)iconImageV;
- (void)setupEntranceView;
- (id)aiTextLabel;
- (id)arrowImageV;
- (void)setAiTextLabel:;
- (void)setArrowImageV:;
- (double)leftoffset;
- (void)setLeftoffset:;
- (double)musicInfoWithAIText;
- (void)setMusicInfoWithAIText:;
- (void).cxx_destruct;
@end
