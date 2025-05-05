@interface IESLivePKGuestInteractiveNormalInfoView : UIView
@property (nonatomic) UIImageView locationIconView;
@property (nonatomic) UILabel applyTimeLabel;
@property (nonatomic) UILabel locationLabel;
@property (nonatomic) UIView infoSeperatorLineView;
@property (nonatomic) IESLivePKGuestInteractiveInvitorView invitorView;
- (void)setInvitorView:;
- (void)updateWithModel:now:sortByTime:;
- (id)applyTimeLabel;
- (id)infoSeperatorLineView;
- (id)invitorView;
- (id)locationIconView;
- (void)setApplyTimeLabel:;
- (void)setInfoSeperatorLineView:;
- (void)setLocationIconView:;
- (id)waitingDesStringWithModel:now:;
- (void)setupConstraints;
- (id)init;
- (void)prepareForReuse;
- (void).cxx_destruct;
- (void)setupViews;
- (id)locationLabel;
- (void)setLocationLabel:;
@end
