@interface AMSBagFrozenDataSourceBuilder : NSObject
@property (nonatomic) ACAccount account;
@property (nonatomic) NSDictionary data;
@property (nonatomic) NSDictionary defaultValues;
@property (nonatomic) NSDate expirationDate;
@property (nonatomic) NSString profile;
@property (nonatomic) NSString profileVersion;
@property (nonatomic) AMSProcessInfo processInfo;
- (id)account;
- (void)setDefaultValues:;
- (void)setAccount:;
- (id)processInfo;
- (void)setProcessInfo:;
- (void)setProfileVersion:;
- (id)data;
- (id)defaultValues;
- (id)createFrozenDataSource;
- (void)setProfile:;
- (void)setExpirationDate:;
- (id)profile;
- (id)expirationDate;
- (id)initWithFrozenDataSource:;
- (void).cxx_destruct;
- (id)createFrozenBag;
- (void)setData:;
- (id)profileVersion;
@end
