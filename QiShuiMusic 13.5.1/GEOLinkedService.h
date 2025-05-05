@interface GEOLinkedService : NSObject
@property (nonatomic) NSTimeZone timeZone;
@property (nonatomic) NSArray businessHours;
@property (nonatomic) NSString localizedCategoryName;
@property (nonatomic) GEOFeatureStyleAttributes styleAttributes;
- (void)setTimeZone:;
- (void).cxx_destruct;
- (id)timeZone;
- (id)styleAttributes;
- (void)setStyleAttributes:;
- (id)businessHours;
- (void)setBusinessHours:;
- (id)initWithGEOPDLinkedService:timeZone:;
- (id)localizedCategoryName;
- (void)setLocalizedCategoryName:;
@end
