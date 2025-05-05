@interface CTCAConnectionState : NSObject
@property (nonatomic) q connectionStatus;
@property (nonatomic) q syncStatus;
@property (nonatomic) q registrationStatus;
@property (nonatomic) q congestionStatus;
@property (nonatomic) NSNumber rssi;
@property (nonatomic) CTCATransmissionProgress currentTransmissionProgress;
- (long long)syncStatus;
- (id)rssi;
- (long long)registrationStatus;
- (void)setRegistrationStatus:;
- (id)initWithCoder:;
- (void)setRssi:;
- (void)encodeWithCoder:;
- (long long)connectionStatus;
- (void).cxx_destruct;
- (id)description;
- (void)setConnectionStatus:;
- (void)setSyncStatus:;
- (id)copyWithZone:;
- (long long)congestionStatus;
- (void)setCongestionStatus:;
- (id)currentTransmissionProgress;
- (void)setCurrentTransmissionProgress:;
+ (BOOL)supportsSecureCoding;
@end
