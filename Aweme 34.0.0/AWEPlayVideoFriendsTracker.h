@interface AWEPlayVideoFriendsTracker : AWEPlayVideoBaseTracker
@property (nonatomic) BOOL isColdLaunchFamiliarFirstPlay;
- (id)paramsForVideoPlayInPlayer:paramsModel:;
- (id)paramsForVideoPlayTimeInPlayer:paramsModel:;
- (id)paramsForVideoPlayFinishInPlayer:paramsModel:;
- (BOOL)isColdLaunchFamiliarFirstPlay;
- (void)setIsColdLaunchFamiliarFirstPlay:;
- (id)init;
@end
