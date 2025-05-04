@interface AWESimAudioDeviceManagerImpl : BDSimAudioDeviceManagerImpl
- (void)dismissSystemVolumeView:;
- (double)volume;
+ (id)sharedInstance;
@end
