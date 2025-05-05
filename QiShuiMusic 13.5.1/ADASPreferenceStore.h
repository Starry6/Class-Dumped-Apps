@interface ADASPreferenceStore : NSObject
@property (nonatomic) NSDictionary keyMap;
@property (nonatomic) NSDictionary defaultValues;
@property (nonatomic) NSDictionary specialDarwinKeys;
@property (nonatomic) NPSDomainAccessor coreAudioDomain;
@property (nonatomic) NPSDomainAccessor coreAudioDeviceDomain;
- (void)registerForNotifications;
- (id)init;
- (id)specialDarwinKeys;
- (void)pairedDeviceStateChanged:;
- (id)coreAudioDeviceDomain;
- (void)initNPSDomain;
- (id)keyMap;
- (id)defaultValues;
- (id)coreAudioDomain;
- (void)setCoreAudioDeviceDomain:;
- (void)setCoreAudioDomain:;
- (void).cxx_destruct;
+ (id)sharedInstance;
@end
