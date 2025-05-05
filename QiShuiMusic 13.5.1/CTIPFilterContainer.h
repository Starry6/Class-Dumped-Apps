@interface CTIPFilterContainer : NSObject
@property (nonatomic) NSArray filters;
- (id)filters;
- (void)setFilters:;
- (id)initWithCoder:;
- (void)encodeWithCoder:;
- (void).cxx_destruct;
- (id)description;
- (id)copyWithZone:;
+ (BOOL)supportsSecureCoding;
@end
