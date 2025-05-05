@interface SSVPlayActivityEnqueuerProperties : NSObject
@property (nonatomic) NSString buildVersion;
@property (nonatomic) NSNumber privateListeningEnabled;
@property (nonatomic) NSString deviceGUID;
@property (nonatomic) NSString deviceName;
@property (nonatomic) NSTimeZone timeZone;
@property (nonatomic) q systemReleaseType;
@property (nonatomic) BOOL SBEnabled;
@property (nonatomic) Q storeAccountID;
@property (nonatomic) NSString storeFrontID;
- (id)buildVersion;
- (id)deviceName;
- (id)deviceGUID;
- (id)initWithCoder:;
- (id)isPrivateListeningEnabled;
- (void)encodeWithCoder:;
- (id)_copyWithClass:zone:;
- (void).cxx_destruct;
- (long long)systemReleaseType;
- (id)description;
- (id)mutableCopyWithZone:;
- (id)timeZone;
- (id)copyWithZone:;
- (id)storeFrontID;
- (unsigned long long)storeAccountID;
- (BOOL)isSBEnabled;
+ (BOOL)supportsSecureCoding;
@end
