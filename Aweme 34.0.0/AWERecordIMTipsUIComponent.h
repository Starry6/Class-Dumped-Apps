@interface AWERecordIMTipsUIComponent : ACCFeatureComponent
@property (nonatomic) <ACCRecorderViewContainer> viewContainer;
@property (nonatomic) UILabel tipsLabel;
@property (nonatomic) UIView tipsWrapperView;
- (id)tipsLabel;
- (void)setTipsLabel:;
- (void)componentDidMount;
- (id)p_imModel;
- (BOOL)p_shouldAddTipsView;
- (void)p_addTipsView;
- (id)p_tipsContent;
- (id)tipsWrapperView;
- (void)setTipsWrapperView:;
- (void).cxx_destruct;
- (void)setViewContainer:;
- (id)viewContainer;
@end
