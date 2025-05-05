@interface GEOComposedRouteAdvisoryItemDetail : NSObject
@property (nonatomic) <GEOServerFormattedString> title;
@property (nonatomic) NSArray details;
- (id)initWithCoder:;
- (void)encodeWithCoder:;
- (id)title;
- (void).cxx_destruct;
- (id)description;
- (id)details;
- (id)copyWithZone:;
- (id)initWithRestrictionDetails:;
+ (BOOL)supportsSecureCoding;
@end
