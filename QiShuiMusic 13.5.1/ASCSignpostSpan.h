@interface ASCSignpostSpan : NSObject
@property (nonatomic) NSMutableSet mutableSupplementaryTags;
@property (nonatomic) NSDate startDate;
@property (nonatomic) NSDate endDate;
@property (nonatomic) Q primaryTag;
@property (nonatomic) NSSet supplementaryTags;
@property (nonatomic) NSDateInterval dateRange;
- (id)startDate;
- (id)init;
- (void)setStartDate:;
- (id)initWithCoder:;
- (void)setEndDate:;
- (void)encodeWithCoder:;
- (id)endDate;
- (id)dateRange;
- (void).cxx_destruct;
- (id)description;
- (id)supplementaryTags;
- (void)addSupplementaryTag:;
- (void)beginEmitting;
- (void)endEmitting;
- (unsigned long long)primaryTag;
- (id)mutableSupplementaryTags;
+ (BOOL)supportsSecureCoding;
@end
