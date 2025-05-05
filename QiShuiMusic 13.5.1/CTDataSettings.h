@interface CTDataSettings : NSObject
@property (nonatomic) BOOL cellularDataEnabled;
@property (nonatomic) BOOL airplaneModeEnabled;
@property (nonatomic) BOOL cellularDataCapable;
- (void)setAirplaneModeEnabled:;
- (void)setCellularDataEnabled:;
- (BOOL)isAirplaneModeEnabled;
- (BOOL)isCellularDataCapable;
- (id)initWithCoder:;
- (void)encodeWithCoder:;
- (BOOL)isCellularDataEnabled;
- (id)description;
- (void)setCellularDataCapable:;
- (id)copyWithZone:;
+ (BOOL)supportsSecureCoding;
@end
