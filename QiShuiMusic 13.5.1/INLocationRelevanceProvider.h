@interface INLocationRelevanceProvider : INRelevanceProvider
@property (nonatomic) CLRegion region;
- (id)region;
- (id)initWithCoder:;
- (unsigned long long)hash;
- (void)encodeWithCoder:;
- (void).cxx_destruct;
- (BOOL)isEqual:;
- (id)initWithRegion:;
+ (BOOL)supportsSecureCoding;
@end
