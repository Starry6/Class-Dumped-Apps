@interface ICLSinfInfo : NSObject
@property (nonatomic) NSNumber applicationDSID;
@property (nonatomic) NSNumber familyID;
@property (nonatomic) NSNumber downloaderDSID;
@property (nonatomic) BOOL hasMIDBasedSINF;
@property (nonatomic) BOOL isMissingRequiredSINF;
@property (nonatomic) NSDictionary legacySinfInfoDictionary;
- (id)familyID;
- (id)initWithCoder:;
- (unsigned long long)hash;
- (void)encodeWithCoder:;
- (id)downloaderDSID;
- (void).cxx_destruct;
- (void)setFamilyID:;
- (void)setDownloaderDSID:;
- (BOOL)isEqual:;
- (id)copyWithZone:;
- (id)applicationDSID;
- (BOOL)hasMIDBasedSINF;
- (id)legacySinfInfoDictionary;
- (id)initWithLegacySinfInfoDictionary:;
- (void)setApplicationDSID:;
- (void)setHasMIDBasedSINF:;
- (BOOL)isMissingRequiredSINF;
- (void)setIsMissingRequiredSINF:;
+ (BOOL)supportsSecureCoding;
@end
