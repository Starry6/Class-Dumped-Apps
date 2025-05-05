@interface GEOAmenityItem : NSObject
@property (nonatomic) NSString amenityTitle;
@property (nonatomic) NSString symbolImageName;
@property (nonatomic) NSInteger amenityType;
@property (nonatomic) BOOL applePayAmenity;
@property (nonatomic) BOOL amenityPresent;
- (id)symbolImageName;
- (void).cxx_destruct;
- (id)description;
- (int)amenityType;
- (id)initWithAmenityValue:;
- (id)amenityTitle;
- (BOOL)isApplePayAmenity;
- (BOOL)isAmenityPresent;
+ (id)amenityItemsFromPDAmenityItems:;
@end
