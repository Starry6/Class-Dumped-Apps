@interface GEOPlannedDestination : NSObject
@property (nonatomic) NSDate arrivalDate;
@property (nonatomic) NSDate expirationDate;
@property (nonatomic) NSInteger transportType;
@property (nonatomic) NSData handle;
- (id)initWithCoordinate:;
- (void)setTransportType:;
- (id)init;
- (id)arrivalDate;
- (id)handle;
- (void)setExpirationDate:;
- (int)transportType;
- (id)initWithCoder:;
- (id)expirationDate;
- (void)encodeWithCoder:;
- (id)initWithMapItem:;
- (void).cxx_destruct;
- (id)description;
- (void)setArrivalDate:;
- (id)initWithMapItemHandle:;
+ (BOOL)supportsSecureCoding;
@end
