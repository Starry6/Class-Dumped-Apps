@interface ENRegionVisit : NSObject
@property (nonatomic) ENRegion region;
@property (nonatomic) NSDate date;
- (id)region;
- (id)initWithCoder:;
- (unsigned long long)hash;
- (id)date;
- (void)encodeWithCoder:;
- (id)initWithRegion:date:;
- (void).cxx_destruct;
- (id)description;
- (BOOL)isEqual:;
- (id)copyWithZone:;
+ (BOOL)supportsSecureCoding;
@end
