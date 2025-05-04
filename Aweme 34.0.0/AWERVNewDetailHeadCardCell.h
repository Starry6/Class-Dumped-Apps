@interface AWERVNewDetailHeadCardCell : AWERVNewDetailBaseCell
@property (nonatomic) AWERVNewDetialInfoContainerView metaInfoView;
- (void)initSubviews;
- (id)metaInfoView;
- (void)setMetaInfoView:;
- (void)makeVideoControllerLayout;
- (void)hideTimeLabelIfNeed:;
- (void)updateVideoControllerLayout;
- (void)controlViewClicked;
- (void)configWithAwemeModel:context:videoController:logExtraDict:;
- (void)handleEventWithActionName:;
- (void)updateMetaInfoViewWithModel:;
- (void)play;
- (id)initWithFrame:;
- (void).cxx_destruct;
@end
