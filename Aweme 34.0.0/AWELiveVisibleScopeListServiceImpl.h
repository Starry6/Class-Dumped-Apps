@interface AWELiveVisibleScopeListServiceImpl : NSObject
@property (nonatomic) Q currentSelectedVisibleType;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)updateOpenLiveModel:;
- (id)getVisibleScopeDetailListVC:liveType:DIContext:selectedBlock:;
- (id)getItemAddTextOf:;
- (id)getCreateAPIParamsOf:;
- (id)getTrackStrOf:;
- (void)openTryLiveVisibleScopeDetailVC:;
- (id)getVisiblePanelViewWithType:liveType:DIContext:selectedBlock:;
- (id)getPaidVisiblePanelViewWithVisibleType:selectedUsers:isShowNotPreviewOption:isPaidOpenLiveNow:selectedBlock:;
- (void)setTryLiveVisibleScopeWithDIContext:completedBlock:;
- (unsigned long long)currentSelectedVisibleType;
- (void)setCurrentSelectedVisibleType:;
- (id)openVisibleSelectPanelInitType:trackContext:isPlayBack:DIContext:completion:;
@end
