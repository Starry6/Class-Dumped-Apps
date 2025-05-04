@interface AWETeenAlbumCollectManager : NSObject
+ (void)clickedRedDotInTabBar;
+ (BOOL)shouldShowRedDotInTabBar;
+ (void)haveCollectedAlbum;
+ (BOOL)shouldShowRedDotInSlidingBar;
+ (void)clickedRedDotInSlidingBar;
+ (BOOL)shouldShowRedDotInAlbumCollectCard;
+ (void)clickedRedDotInAlbumCollectCard;
+ (void)updateAlbumCollectStatus:albumID:fakeAlbumType:completion:;
@end
