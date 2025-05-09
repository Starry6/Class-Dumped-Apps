@interface AFSyncInfo : NSObject
@property (nonatomic) NSString anchor;
@property (nonatomic) NSString validity;
@property (nonatomic) q count;
@property (nonatomic) NSString key;
@property (nonatomic) SASyncAppMetaData appMetadata;
@property (nonatomic) BOOL targetIsLocal;
@property (nonatomic) BOOL forVerification;
@property (nonatomic) NSSet reasons;
- (void)setCount:;
- (id)anchor;
- (id)key;
- (id)reasons;
- (id)initWithCoder:;
- (void)setAnchor:;
- (void)setValidity:;
- (void)setKey:;
- (void)encodeWithCoder:;
- (void).cxx_destruct;
- (id)description;
- (id)validity;
- (long long)count;
- (void)setReasons:;
- (id)initWithAnchor:forcingReset:;
- (id)appMetadata;
- (void)setAppMetadata:;
- (BOOL)targetIsLocal;
- (void)setTargetIsLocal:;
- (BOOL)forVerification;
- (void)setForVerification:;
+ (BOOL)supportsSecureCoding;
@end
