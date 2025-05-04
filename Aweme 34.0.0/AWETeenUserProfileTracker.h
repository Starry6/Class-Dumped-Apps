@interface AWETeenUserProfileTracker : NSObject
+ (void)trackFavouriteDetailShowWithEnterFrom:tokenType:;
+ (void)trackPersonalHomepageFavouriteShowIsVideoShow:isAlbumShow:;
+ (void)trackPersonalHomepageLikeShow;
+ (void)trackPersonalWorkDetailAction:action:;
+ (void)trackPersonalWorkDetailActionResult:action:isSuccess:;
+ (void)trackPersonalWorkCardClick:rank:;
+ (void)trackPersonalWorkCardShow:rank:;
+ (void)trackPersonalWorkTabShow;
@end
