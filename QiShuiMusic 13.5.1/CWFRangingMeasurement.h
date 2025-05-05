@interface CWFRangingMeasurement : NSObject
@property (nonatomic) q roundTripTime;
@property (nonatomic) q RSSI;
@property (nonatomic) Q channel;
@property (nonatomic) q SNR;
@property (nonatomic) Q coreID;
- (void)setSNR:;
- (long long)SNR;
- (void)setChannel:;
- (unsigned long long)channel;
- (long long)RSSI;
- (void)setRSSI:;
- (id)initWithCoder:;
- (unsigned long long)hash;
- (void)encodeWithCoder:;
- (id)description;
- (BOOL)isEqual:;
- (id)copyWithZone:;
- (long long)roundTripTime;
- (void)setRoundTripTime:;
- (BOOL)isEqualToRangingMeasurement:;
- (unsigned long long)coreID;
- (void)setCoreID:;
+ (BOOL)supportsSecureCoding;
@end
