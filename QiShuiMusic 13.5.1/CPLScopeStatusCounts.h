@interface CPLScopeStatusCounts : NSObject
@property (nonatomic) NSDictionary countPerFlags;
@property (nonatomic) Q countOfSharingRecords;
@property (nonatomic) Q countOfUnsharingRecords;
- (id)initWithCoder:;
- (void)encodeWithCoder:;
- (void).cxx_destruct;
- (id)description;
- (unsigned long long)countOfSharingRecords;
- (unsigned long long)countOfUnsharingRecords;
- (id)initWithFlagsCounts:;
- (void)_computeSummariesIfNecessary;
- (id)countPerFlags;
+ (BOOL)supportsSecureCoding;
@end
