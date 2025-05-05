@interface DNDDevice : NSObject
@property (nonatomic) Q deviceClass;
@property (nonatomic) Q deviceCapabilities;
- (unsigned long long)deviceClass;
- (unsigned long long)deviceCapabilities;
- (unsigned long long)hash;
- (id)description;
- (id)_initWithClass:deviceCapabilities:;
- (BOOL)isEqual:;
- (id)copyWithZone:;
+ (id)currentDevice;
+ (id)deviceWithClass:deviceCapabilities:;
@end
