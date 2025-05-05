@interface AMSDeviceMessengerFilter : NSObject
@property (nonatomic) q messageType;
@property (nonatomic) ACAccount account;
@property (nonatomic) q deviceType;
- (id)account;
- (long long)deviceType;
- (long long)messageType;
- (void)setDeviceType:;
- (void)setAccount:;
- (void).cxx_destruct;
- (void)setMessageType:;
- (BOOL)matchesMessage:;
@end
