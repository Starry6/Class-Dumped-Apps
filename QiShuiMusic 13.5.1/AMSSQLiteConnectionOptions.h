@interface AMSSQLiteConnectionOptions : NSObject
@property (nonatomic) NSString databasePath;
@property (nonatomic) q cacheSize;
@property (nonatomic) NSString protectionType;
@property (nonatomic) BOOL readOnly;
- (BOOL)isReadOnly;
- (id)databasePath;
- (id)initWithDatabasePath:;
- (void)setCacheSize:;
- (long long)cacheSize;
- (void)setReadOnly:;
- (void)setCacheSizeWithNumberOfDatabasePages:;
- (id)protectionType;
- (void)setProtectionType:;
- (id)initWithCoder:;
- (void)setCacheSizeWithNumberOfKilobytes:;
- (int)applyToDatabase:;
- (void)encodeWithCoder:;
- (void).cxx_destruct;
- (void)setDatabasePath:;
- (id)copyWithZone:;
+ (BOOL)supportsSecureCoding;
@end
