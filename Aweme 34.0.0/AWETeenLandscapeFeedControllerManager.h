@interface AWETeenLandscapeFeedControllerManager : AWEShellControllerManager
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)classNameArray;
- (void)playerWillLoopPlayingWithAwemeID:videoID:currentTime:;
- (void)syncPlayTimeWithAwemeModel:playedDuration:totalDuration:;
- (void)didVideoChanged:;
@end
