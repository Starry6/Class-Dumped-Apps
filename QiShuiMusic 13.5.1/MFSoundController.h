@interface MFSoundController : NSObject
+ (id)lazyAlertWithType:topic:;
+ (void)_playAlertWithType:topic:;
+ (void)playSentMailSound;
+ (void)playNewMailSoundStyle:forAccount:;
@end
