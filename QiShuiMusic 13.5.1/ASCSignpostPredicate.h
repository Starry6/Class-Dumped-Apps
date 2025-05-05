@interface ASCSignpostPredicate : NSObject
@property (nonatomic) BOOL empty;
@property (nonatomic) NSSet tags;
@property (nonatomic) NSArray dateRanges;
- (id)init;
- (id)tags;
- (BOOL)isEmpty;
- (id)initWithCoder:;
- (unsigned long long)hash;
- (void)encodeWithCoder:;
- (void).cxx_destruct;
- (id)description;
- (BOOL)isEqual:;
- (id)copyWithZone:;
- (id)dateRanges;
- (id)initWithTags:dateRanges:;
- (id)initWithSpans:;
- (id)predicateByAddingTag:;
- (id)predicateByAddingDateRange:;
+ (BOOL)supportsSecureCoding;
@end
