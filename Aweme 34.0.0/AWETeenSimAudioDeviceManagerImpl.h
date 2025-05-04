@interface AWETeenSimAudioDeviceManagerImpl : BDSimAudioDeviceManagerImpl
- (void)dismissSystemVolumeView:;
- (double)volume;
+ (id)sharedInstance;
@end
