@interface AWEMusicPlaylistService : HTSService
@property (nonatomic) BOOL isPanelShowing;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (BOOL)isPanelShowing;
- (void)setIsPanelShowing:;
- (void)showPlaylistDetailOfID:secUserID:trackParams:completion:;
- (void)showPlaylistDetailOfID:secUserID:trackParams:currentInteractionViewController:extraInfo:completion:;
@end
