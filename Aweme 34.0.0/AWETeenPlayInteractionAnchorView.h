@interface AWETeenPlayInteractionAnchorView : AWETeenPlayInteractionBaseElement
@property (nonatomic) AWEMinorAnchorInfoModel anchorInfo;
@property (nonatomic) UIView contentView;
@property (nonatomic) UIImageView iconView;
@property (nonatomic) UILabel titleLabel;
@property (nonatomic) UILabel titleTagLabel;
@property (nonatomic) UIView sepLine;
@property (nonatomic) BOOL hasTrackShow;
- (id)anchorInfo;
- (void)setSepLine:;
- (id)sepLine;
- (void)setAnchorInfo:;
- (id)titleTagLabel;
- (void)setTitleTagLabel:;
- (void)setHasTrackShow:;
- (BOOL)hasTrackShow;
- (void)didTappedOnView:;
- (id)truncatedString:withFont:maxWidth:;
- (void)viewDidLoad;
- (id)contentView;
- (id)iconView;
- (void)setIconView:;
- (void)setTitleLabel:;
- (void)setData:;
- (void).cxx_destruct;
- (void)setContentView:;
- (id)titleLabel;
@end
