@interface PPFuzzyContactQuery : NSObject
@property (nonatomic) NSSet sourceBundleIds;
@property (nonatomic) NSDate startDate;
@property (nonatomic) NSDate endDate;
@property (nonatomic) BOOL onlyAddressBook;
- (id)startDate;
- (void)setStartDate:;
- (id)initWithCoder:;
- (unsigned long long)hash;
- (void)setEndDate:;
- (void)encodeWithCoder:;
- (id)endDate;
- (void).cxx_destruct;
- (id)description;
- (BOOL)isEqual:;
- (id)copyWithZone:;
- (BOOL)isEqualToFuzzyContactQuery:;
- (id)sourceBundleIds;
- (void)setSourceBundleIds:;
- (BOOL)onlyAddressBook;
- (void)setOnlyAddressBook:;
+ (BOOL)supportsSecureCoding;
@end
