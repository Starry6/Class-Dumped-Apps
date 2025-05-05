@interface CTDataStatusBasic : NSObject
@property (nonatomic) BOOL attached;
@property (nonatomic) BOOL hasIndicator;
@property (nonatomic) BOOL inHomeCountry;
@property (nonatomic) BOOL roamAllowed;
@property (nonatomic) BOOL cellularDataPossible;
@property (nonatomic) BOOL newRadioCoverage;
- (BOOL)attached;
- (void)setRoamAllowed:;
- (BOOL)roamAllowed;
- (void)setInHomeCountry:;
- (BOOL)newRadioCoverage;
- (id)initWithCoder:;
- (BOOL)inHomeCountry;
- (void)encodeWithCoder:;
- (void)setHasIndicator:;
- (BOOL)cellularDataPossible;
- (void)setAttached:;
- (id)description;
- (void)setCellularDataPossible:;
- (void)setNewRadioCoverage:;
- (id)copyWithZone:;
- (BOOL)hasIndicator;
+ (BOOL)supportsSecureCoding;
@end
