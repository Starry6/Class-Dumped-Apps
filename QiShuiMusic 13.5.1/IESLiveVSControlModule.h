@interface IESLiveVSControlModule : IESLiveModule
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (BOOL)isPhoneLandcape;
- (BOOL)isVSStreamVerticalDevicePortait;
- (id)audienceBrightnessVolumeGestureRouter;
- (id)audienceBrightnessVolumeRouter;
- (long long)currentStreamDeviceStatus;
- (BOOL)isLandcape;
- (BOOL)isPadRotateLandscape;
- (BOOL)isVSStreamHorizontalDeviceLandscape;
- (BOOL)isVSStreamHorizontalDevicePortait;
- (BOOL)isVSStreamVertical;
- (BOOL)isVSStreamVerticalDeviceLandscape;
- (id)liveMultitabInterface;
- (id)liveSeekContainerRouter;
- (BOOL)isPad;
- (BOOL)isPhone;
- (long long)currentInterfaceOrientation;
@end
