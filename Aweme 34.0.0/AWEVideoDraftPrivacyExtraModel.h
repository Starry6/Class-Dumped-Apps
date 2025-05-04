@interface AWEVideoDraftPrivacyExtraModel : NSObject
@property (nonatomic) Q partOfVisibleStatus;
@property (nonatomic) NSArray partOfVisibleUsers;
@property (nonatomic) NSString partOfVisibleUsersJson;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)setPartOfVisibleStatus:;
- (unsigned long long)partOfVisibleStatus;
- (id)partOfVisibleUsers;
- (id)partOfVisibleUserIDs;
- (void)setPartOfVisibleUsers:;
- (void)setPartOfVisibleUsersJson:;
- (id)partOfVisibleUsersJson;
- (void)encodeWithCoder:;
- (void).cxx_destruct;
- (id)initWithCoder:;
- (id)copyWithZone:;
- (BOOL)isEqualToObject:;
+ (id)getJsonStringWithUserModels:;
+ (id)getUserModelsWithJsonString:;
@end
