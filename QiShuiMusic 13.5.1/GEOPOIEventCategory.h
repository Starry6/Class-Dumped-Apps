@interface GEOPOIEventCategory : NSObject
@property (nonatomic) NSString category;
@property (nonatomic) NSArray localizedNames;
- (id)init;
- (id)initWithCoder:;
- (void)encodeWithCoder:;
- (void).cxx_destruct;
- (BOOL)isEqual:;
- (id)category;
- (id)localizedNames;
- (id)initWithEventCategory:;
- (id)initWithCategory:localizedNames:;
- (BOOL)isEqualToPOIEventCategory:;
- (id)parsePDCategories:;
+ (BOOL)supportsSecureCoding;
+ (id)poiEventCategoriesForEventCategories:;
@end
