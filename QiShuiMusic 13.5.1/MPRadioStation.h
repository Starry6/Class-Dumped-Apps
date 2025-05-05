@interface MPRadioStation : NSObject
@property (nonatomic) NSString stationStringID;
@property (nonatomic) q uniqueIdentifier;
@property (nonatomic) NSString localizedName;
@property (nonatomic) NSString localizedDescription;
- (void)setUniqueIdentifier:;
- (void)setLocalizedName:;
- (long long)uniqueIdentifier;
- (id)localizedDescription;
- (id)localizedName;
- (id)initWithCoder:;
- (void)encodeWithCoder:;
- (void).cxx_destruct;
- (void)setLocalizedDescription:;
- (BOOL)isEqual:;
- (id)copyWithZone:;
- (id)stationStringID;
- (id)initWithPlayParameters:;
- (id)initWithModelStation:;
- (id)initWithStation:;
- (void)setStationStringID:;
+ (BOOL)supportsSecureCoding;
@end
