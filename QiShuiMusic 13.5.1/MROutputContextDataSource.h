@interface MROutputContextDataSource : NSObject
@property (nonatomic) float volume;
@property (nonatomic) BOOL isAirPlaying;
@property (nonatomic) I volumeControlCapabilities;
@property (nonatomic) BOOL isMuted;
@property (nonatomic) NSArray outputDevices;
@property (nonatomic) NSString uniqueIdentifier;
@property (nonatomic) NSObject<OS_dispatch_queue> notificationQueue;
- (float)volume;
- (id)uniqueIdentifier;
- (id)outputDevices;
- (id)outputDeviceForUID:;
- (BOOL)isMuted;
- (unsigned int)volumeControlCapabilities;
- (float)volumeForOutputDeviceUID:error:;
- (BOOL)isMutedForOutputDevice:error:;
- (id)notificationQueue;
- (id)debugDescription;
- (unsigned int)volumeControlCapabilitiesForOutputDeviceUID:error:;
- (void)setNotificationQueue:;
- (BOOL)isAirPlaying;
- (void).cxx_destruct;
- (id)description;
@end
