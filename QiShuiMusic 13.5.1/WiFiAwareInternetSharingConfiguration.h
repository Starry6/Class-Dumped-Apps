@interface WiFiAwareInternetSharingConfiguration : NSObject
@property (nonatomic) NSString interfaceName;
@property (nonatomic) BOOL provider;
@property (nonatomic) BOOL automatic;
@property (nonatomic) NSObject policy;
- (void)setPolicy:;
- (void)setProvider:;
- (void)setInterfaceName:;
- (id)policy;
- (id)initWithCoder:;
- (BOOL)provider;
- (void)encodeWithCoder:;
- (void).cxx_destruct;
- (id)description;
- (id)interfaceName;
- (BOOL)isEqual:;
- (id)copyWithZone:;
- (void)setAutomatic:;
- (BOOL)automatic;
- (id)initWithInterfaceName:isProvider:isAutomatic:;
- (BOOL)interfaceNameEqual:;
+ (BOOL)supportsSecureCoding;
+ (id)automaticallyProvideInternetToResponders;
+ (id)automaticallyRequestInternetFromInitiators;
+ (id)provideInternetToInitiatorsFromInterface:;
+ (id)requestInterentFromResponder;
@end
