@interface CADEventsForConferenceURLPredicate : EKPredicate
@property (nonatomic) NSString urlString;
@property (nonatomic) q limit;
- (id)urlString;
- (long long)limit;
- (id)predicateFormat;
- (id)initWithCoder:;
- (void)setLimit:;
- (void)encodeWithCoder:;
- (void).cxx_destruct;
- (id)defaultPropertiesToLoad;
- (id)description;
- (void)setUrlString:;
- (id)copyWithZone:;
- (id)initWithURL:limit:;
- (id)copyMatchingItemsWithDatabase:;
+ (BOOL)supportsSecureCoding;
@end
