@interface CADUpcomingEventsPredicate : CADPredicate
@property (nonatomic) NSInteger limit;
- (int)limit;
- (id)predicateFormat;
- (id)initWithCoder:;
- (id)initWithLimit:;
- (void)encodeWithCoder:;
- (id)copyWithZone:;
- (id)copyMatchingItemsWithDatabase:;
+ (BOOL)supportsSecureCoding;
+ (id)predicateWithLimit:;
@end
