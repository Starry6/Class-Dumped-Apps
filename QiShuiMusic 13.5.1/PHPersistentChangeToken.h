@interface PHPersistentChangeToken : NSObject
@property (nonatomic) NSPersistentHistoryToken persistentHistoryToken;
@property (nonatomic) NSInteger version;
- (id)initWithPersistentHistoryToken:;
- (int)version;
- (id)initWithCoder:;
- (unsigned long long)hash;
- (void)encodeWithCoder:;
- (void).cxx_destruct;
- (id)description;
- (BOOL)isEqual:;
- (id)copyWithZone:;
- (id)initWithPersistentHistoryToken:version:;
- (BOOL)isEqualToPersistentChangeToken:;
- (id)persistentHistoryToken;
+ (BOOL)supportsSecureCoding;
+ (int)currentVersion;
+ (id)currentTokenForContext:;
+ (id)tokenWithPersistentHistoryToken:;
@end
