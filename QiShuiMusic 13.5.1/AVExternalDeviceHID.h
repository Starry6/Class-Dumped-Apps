@interface AVExternalDeviceHID : NSObject
@property (nonatomic) NSString UUID;
@property (nonatomic) NSString screenID;
@property (nonatomic) q inputMode;
- (void)setInputMode:;
- (long long)inputMode;
- (void)dealloc;
- (id)UUID;
- (id)_externalDevice;
- (id)screenID;
- (id)_figEndpointHIDInputMode;
- (id)initWithExternalDeviceAndHIDDictionary:hidDictionary:;
@end
