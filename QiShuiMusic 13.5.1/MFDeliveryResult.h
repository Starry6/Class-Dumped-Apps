@interface MFDeliveryResult : NSObject
@property (nonatomic) q status;
@property (nonatomic) double duration;
@property (nonatomic) Q bytesSent;
@property (nonatomic) BOOL isWifi;
@property (nonatomic) q attributes;
- (void)setStatus:;
- (void)setAttributes:;
- (long long)attributes;
- (void)setDuration:;
- (id)initWithStatus:;
- (id)description;
- (long long)status;
- (double)duration;
- (void)setBytesSent:;
- (unsigned long long)bytesSent;
- (BOOL)isWifi;
- (void)setIsWifi:;
@end
