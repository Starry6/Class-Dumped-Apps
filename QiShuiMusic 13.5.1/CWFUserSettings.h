@interface CWFUserSettings : NSObject
@property (nonatomic) q syncMode;
@property (nonatomic) q askToJoinMode;
@property (nonatomic) q autoHotspotMode;
@property (nonatomic) q compatibilityMode;
@property (nonatomic) NSDictionary OSSpecificAttributes;
- (long long)autoHotspotMode;
- (void)setAutoHotspotMode:;
- (id)initWithCoder:;
- (BOOL)isEqualToUserSettings:;
- (void)setOSSpecificAttributes:;
- (unsigned long long)hash;
- (long long)syncMode;
- (void)setCompatibilityMode:;
- (void)encodeWithCoder:;
- (void).cxx_destruct;
- (void)setAskToJoinMode:;
- (id)description;
- (BOOL)isEqual:;
- (long long)askToJoinMode;
- (id)OSSpecificAttributes;
- (long long)compatibilityMode;
- (id)copyWithZone:;
- (void)setSyncMode:;
+ (BOOL)supportsSecureCoding;
@end
