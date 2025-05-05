@interface AMSMockBagBuilder : NSObject
@property (nonatomic) NSMutableDictionary data;
@property (nonatomic) NSDate expirationDate;
@property (nonatomic) NSString profile;
@property (nonatomic) NSString profileVersion;
- (id)init;
- (void)setProfileVersion:;
- (id)data;
- (void)unionBagKeySet:;
- (void)setProfile:;
- (void)setExpirationDate:;
- (id)profile;
- (id)expirationDate;
- (id)initWithData:;
- (void).cxx_destruct;
- (void)setData:;
- (id)profileVersion;
- (void)addBagKey:value:valueType:;
- (id)createMockBag;
@end
