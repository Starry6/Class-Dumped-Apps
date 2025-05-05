@interface ICLStashedAppRecord : ICLAppRecord
@property (nonatomic) NSDate stashedAtTimestamp;
@property (nonatomic) NSDate stashOriginalInstallTimestamp;
- (id)initWithCoder:;
- (unsigned long long)hash;
- (void)encodeWithCoder:;
- (void).cxx_destruct;
- (BOOL)isEqual:;
- (id)copyWithZone:;
- (id)legacyRecordDictionary;
- (id)initWithLegacyRecordDictionary:;
- (id)stashedAtTimestamp;
- (void)setStashedAtTimestamp:;
- (id)stashOriginalInstallTimestamp;
- (void)setStashOriginalInstallTimestamp:;
+ (BOOL)supportsSecureCoding;
@end
