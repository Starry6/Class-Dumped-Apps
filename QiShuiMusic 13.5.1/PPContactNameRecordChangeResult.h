@interface PPContactNameRecordChangeResult : NSObject
@property (nonatomic) NSArray changes;
@property (nonatomic) BOOL changesTruncated;
- (id)initWithCoder:;
- (unsigned long long)hash;
- (BOOL)changesTruncated;
- (id)changes;
- (void)encodeWithCoder:;
- (void).cxx_destruct;
- (id)description;
- (BOOL)isEqual:;
- (id)copyWithZone:;
- (id)initWithChanges:changesTruncated:;
- (BOOL)isEqualToContactNameRecordChangeResult:;
+ (BOOL)supportsSecureCoding;
+ (id)contactNameRecordChangeResultWithChanges:changesTruncated:;
@end
