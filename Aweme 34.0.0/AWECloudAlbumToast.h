@interface AWECloudAlbumToast : NSObject
+ (void)showWithError:defaultToast:;
+ (void)showWithCode:;
+ (id)errorStringWithCode:;
+ (void)showWithText:;
+ (void)showWithError:;
@end
