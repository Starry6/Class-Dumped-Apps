@interface MRExternalOutputContextDataSource : MROutputContextDataSource
- (float)volume;
- (id)initWithUniqueIdentifier:;
- (id)uniqueIdentifier;
- (id)outputDevices;
- (void)removeAllOutputDevices;
- (unsigned int)volumeControlCapabilities;
- (id)initWithCoder:;
- (void)removeOutputDevices:;
- (void)encodeWithCoder:;
- (void)updateVolumeControlCapabilities:outputDeviceUID:;
- (void).cxx_destruct;
- (void)updateOutputDevices:;
- (void)updateVolume:outputDeviceUID:;
+ (BOOL)supportsSecureCoding;
@end
