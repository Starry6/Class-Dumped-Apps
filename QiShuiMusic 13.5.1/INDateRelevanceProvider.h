@interface INDateRelevanceProvider : INRelevanceProvider
@property (nonatomic) NSDate startDate;
@property (nonatomic) NSDate endDate;
- (id)startDate;
- (id)initWithCoder:;
- (unsigned long long)hash;
- (id)initWithStartDate:endDate:;
- (void)encodeWithCoder:;
- (id)endDate;
- (void).cxx_destruct;
- (BOOL)isEqual:;
+ (BOOL)supportsSecureCoding;
@end
