@interface GEOPlaceLineTemplate : NSObject
@property (nonatomic) NSInteger type;
@property (nonatomic) NSString categoryName;
@property (nonatomic) GEOBusinessHours businessHours;
@property (nonatomic) NSString locationName;
@property (nonatomic) GEORatingSummary ratingSummary;
@property (nonatomic) <GEOFactoid> factoid;
- (id)locationName;
- (int)type;
- (void).cxx_destruct;
- (id)businessHours;
- (id)categoryName;
- (id)factoid;
- (id)initWithDataItem:timeZone:attributionMap:;
- (id)ratingSummary;
+ (BOOL)isDataItemValid:;
@end
