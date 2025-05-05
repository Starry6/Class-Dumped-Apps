@interface MBRestoreFailure : NSObject
@property (nonatomic) NSString identifier;
@property (nonatomic) NSString displayName;
@property (nonatomic) NSString dataclass;
@property (nonatomic) NSString assetType;
@property (nonatomic) NSData icon;
@property (nonatomic) NSError error;
- (id)assetType;
- (void)setDataclass:;
- (void)dealloc;
- (void)setError:;
- (id)icon;
- (id)identifier;
- (id)error;
- (id)initWithCoder:;
- (id)dataclass;
- (void)setDisplayName:;
- (id)displayName;
- (void)encodeWithCoder:;
- (void)setAssetType:;
- (void)setIcon:;
- (id)description;
- (void)setIdentifier:;
- (id)copyWithZone:;
- (id)initWithIdentifier:dataclass:assetType:displayName:error:;
+ (BOOL)supportsSecureCoding;
@end
