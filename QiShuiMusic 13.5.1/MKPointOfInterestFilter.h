@interface MKPointOfInterestFilter : NSObject
- (id)init;
- (BOOL)excludesCategory:;
- (id)initWithCoder:;
- (id)initExcludingCategories:;
- (void)encodeWithCoder:;
- (id)_geoPOICategoryFilter;
- (BOOL)isEqualToPointOfInterestFilter:;
- (BOOL)_includesAllCategories;
- (id)initIncludingCategories:;
- (BOOL)_excludesAllCategories;
- (void).cxx_destruct;
- (id)description;
- (BOOL)includesCategory:;
- (id)initIncludingCategories:excludingCategories:;
- (BOOL)isEqual:;
- (id)copyWithZone:;
+ (BOOL)supportsSecureCoding;
+ (id)filterIncludingAllCategories;
+ (id)filterExcludingAllCategories;
@end
