@interface EMSender : NSObject
@property (nonatomic) q databaseID;
@property (nonatomic) q bucket;
@property (nonatomic) NSString displayName;
@property (nonatomic) NSArray addresses;
@property (nonatomic) NSString contactIdentifier;
- (long long)databaseID;
- (void)dealloc;
- (id)contactIdentifier;
- (id)initWithCoder:;
- (unsigned long long)hash;
- (void)setDatabaseID:;
- (id)displayName;
- (void)encodeWithCoder:;
- (long long)compare:;
- (void).cxx_destruct;
- (void)setBucket:;
- (BOOL)isEqual:;
- (id)copyWithZone:;
- (long long)bucket;
- (id)addresses;
- (void)addAddress:;
- (id)initWithDatabaseID:addresses:contactIdentifier:bucket:;
- (void)removeAddress:;
- (id)_bestDisplayNameFromDisplayNames:;
+ (BOOL)supportsSecureCoding;
@end
