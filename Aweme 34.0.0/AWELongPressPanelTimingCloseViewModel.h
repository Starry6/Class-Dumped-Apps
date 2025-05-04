@interface AWELongPressPanelTimingCloseViewModel : AWELongPressPanelBaseViewModel
@property (nonatomic) UILabel statusLabel;
@property (nonatomic) AWEBinding timingCloseBinding;
@property (nonatomic) AWEBinding timingCloseTypeBinding;
- (BOOL)needShow;
- (id)timingCloseBinding;
- (id)timingCloseTypeBinding;
- (void)trackTimingCloseClick;
- (void)setTimingCloseBinding:;
- (void)setTimingCloseTypeBinding:;
- (void)configVM;
- (id)panelBizVMIdentifier;
- (void)updateStatusLabelByRemainTime;
- (void).cxx_destruct;
- (void)setStatusLabel:;
- (id)statusLabel;
+ (id)formateDuration:;
+ (id)longPressPanelViewModel;
@end
