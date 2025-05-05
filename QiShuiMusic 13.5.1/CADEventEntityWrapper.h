@interface CADEventEntityWrapper : CADEntityWrapper
@property (nonatomic) BOOL isDropoffEvent;
@property (nonatomic) BOOL isPickupEvent;
- (BOOL)isPickupEvent;
- (void)setIsPickupEvent:;
- (id)initWithCoder:;
- (void)setIsDropoffEvent:;
- (void)encodeWithCoder:;
- (BOOL)isDropoffEvent;
- (id)initWithCalEntity:loadedValues:occurrenceDate:;
- (id)occurrenceDate;
+ (BOOL)supportsSecureCoding;
@end
