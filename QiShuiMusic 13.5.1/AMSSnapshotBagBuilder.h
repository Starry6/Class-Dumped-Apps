@interface AMSSnapshotBagBuilder : NSObject
@property (nonatomic) NSDictionary data;
@property (nonatomic) NSDictionary defaultValues;
@property (nonatomic) NSDate expirationDate;
@property (nonatomic) AMSProcessInfo processInfo;
@property (nonatomic) NSString profile;
@property (nonatomic) NSString profileVersion;
- (void)setDefaultValues:;
- (id)processInfo;
- (void)setProcessInfo:;
- (void)setProfileVersion:;
- (id)data;
- (id)defaultValues;
- (void)setProfile:;
- (void)setExpirationDate:;
- (id)profile;
- (id)expirationDate;
- (id)buildWithError:;
- (void).cxx_destruct;
- (void)setData:;
- (id)profileVersion;
@end
