@interface MPMusicPlayerRadioStationQueueDescriptor : MPMusicPlayerQueueDescriptor
@property (nonatomic) MPRadioStation radioStation;
- (BOOL)isEmpty;
- (id)initWithCoder:;
- (void)encodeWithCoder:;
- (void).cxx_destruct;
- (id)description;
- (BOOL)isEqual:;
- (id)copyWithZone:;
- (id)radioStation;
- (id)initWithRadioStation:;
+ (BOOL)supportsSecureCoding;
@end
