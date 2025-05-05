@interface CKDistributedTimestampVector : NSObject
@property (nonatomic) NSMutableArray timestampArray;
- (id)initWithTimestamps:;
- (id)initWithCoder:;
- (unsigned long long)hash;
- (void)mergeFrom:;
- (void)encodeWithCoder:;
- (void)addTimestamp:;
- (void).cxx_destruct;
- (id)description;
- (BOOL)isEqual:;
- (id)copyWithZone:;
- (id)timestamps;
- (unsigned long long)timestampCount;
- (id)timestampAtIndex:;
- (id)initWithTimestampClockVector:fillingInGaps:;
- (long long)indexForTimestampForSiteIdentifier:;
- (id)timestampForSiteIdentifier:;
- (id)sequentialSiteIdentifiers;
- (BOOL)_isGreaterThanOrEqualToTimestamp:;
- (long long)compareToTimestampVector:;
- (id)minimalTimestampWith:;
- (id)timestampArray;
- (void)setTimestampArray:;
+ (BOOL)supportsSecureCoding;
@end
