@interface AWERVNewDetailNormalCardCell : AWERVNewDetailBaseCell
@property (nonatomic) AWERVNewDetailAuthorInfoView authorInfoView;
@property (nonatomic) AWERVNewDetialInfoContainerView metaInfoView;
@property (nonatomic) MASConstraint videoHeightContraint;
- (void)setupSubViews;
- (id)authorInfoView;
- (long long)abValue;
- (id)metaInfoView;
- (void)setMetaInfoView:;
- (void)makeVideoControllerLayout;
- (id)videoHeightContraint;
- (void)setVideoHeightContraint:;
- (void)updateVideoControllerLayout;
- (void)controlViewClicked;
- (void)configWithAwemeModel:context:videoController:logExtraDict:;
- (void)handleEventWithActionName:;
- (void)updateFollowStatusWithUser:;
- (void)setAuthorInfoView:;
- (id)initWithFrame:;
- (void).cxx_destruct;
- (void)updateWithModel:;
@end
