@interface AWEOpenShareAlbumNetManager : NSObject
+ (void)requestAlbumInfoWithCardType:max:count:clientKey:customMaxVideoCount:scene:Completion:;
+ (void)requestUpdateCustomVideosWithItemIds:cardType:clientKey:completion:;
@end
