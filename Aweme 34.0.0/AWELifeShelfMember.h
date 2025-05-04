@interface AWELifeShelfMember : MTLModel
@property (nonatomic) NSNumber showMemberEntrance;
@property (nonatomic) NSString memberSchemaUrl;
@property (nonatomic) Q joinStatus;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)setJoinStatus:;
- (id)memberSchemaUrl;
- (id)showMemberEntrance;
- (void)setMemberSchemaUrl:;
- (void)setShowMemberEntrance:;
- (unsigned long long)joinStatus;
- (void).cxx_destruct;
+ (id)JSONKeyPathsByPropertyKey;
@end
