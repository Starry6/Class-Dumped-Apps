@interface AWEMixDetailInformationControllerManager : AWEShellControllerManager
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)classNameArray;
- (void)updateMixInfo:needResetDataController:;
- (void)loadMoreFinishAfterUpdateMixInfo:error:;
- (BOOL)shouldDisableScrollToEpisodeWhenUpdate;
- (BOOL)shouldShowBottomButtonWhenScrolling;
@end
