@interface SARestaurantRestaurant : SALocalSearchBusiness2
@property (nonatomic) NSArray attributeSet;
@property (nonatomic) NSArray makeReservationPunchOuts;
@property (nonatomic) NSURL menuLink;
@property (nonatomic) NSArray openings;
@property (nonatomic) NSArray orderDeliveryPunchOuts;
- (id)groupIdentifier;
- (id)encodedClassName;
- (id)attributeSet;
- (void)setAttributeSet:;
- (id)makeReservationPunchOuts;
- (void)setMakeReservationPunchOuts:;
- (id)menuLink;
- (void)setMenuLink:;
- (id)openings;
- (void)setOpenings:;
- (id)orderDeliveryPunchOuts;
- (void)setOrderDeliveryPunchOuts:;
+ (id)restaurant;
+ (id)restaurantWithDictionary:context:;
@end
