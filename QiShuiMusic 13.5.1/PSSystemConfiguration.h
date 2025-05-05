@interface PSSystemConfiguration : NSObject
- (void)dealloc;
- (unsigned char)synchronizeForWriting:;
- (void)cleanupPrefs;
- (id)dataServiceID;
- (id)voicemailServiceID;
- (id)getServiceIDForPDPContext:;
- (id)interfaceConfigurationValueForKey:serviceID:;
- (void)setInterfaceConfigurationValue:forKey:serviceID:;
- (id)protocolConfiguration:serviceID:;
- (void)setProtocolConfiguration:protocolType:serviceID:;
- (id)protocolConfigurationValueForKey:protocolType:serviceID:;
- (void)setProtocolConfigurationValue:forKey:protocolType:serviceID:;
+ (id)sharedInstance;
@end
