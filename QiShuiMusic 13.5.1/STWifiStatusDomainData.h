@interface STWifiStatusDomainData : NSObject
@property (nonatomic) BOOL wifiActive;
@property (nonatomic) Q signalStrengthBars;
@property (nonatomic) BOOL associatedToIOSHotspot;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (BOOL)isWifiActive;
- (id)init;
- (id)dataByApplyingDiff:;
- (unsigned long long)signalStrengthBars;
- (BOOL)isAssociatedToIOSHotspot;
- (id)succinctDescriptionBuilder;
- (id)initWithCoder:;
- (unsigned long long)hash;
- (id)diffFromData:;
- (void)encodeWithCoder:;
- (id)succinctDescription;
- (id)description;
- (id)mutableCopyWithZone:;
- (id)descriptionBuilderWithMultilinePrefix:;
- (BOOL)isEqual:;
- (id)descriptionWithMultilinePrefix:;
- (id)copyWithZone:;
+ (BOOL)supportsSecureCoding;
@end
