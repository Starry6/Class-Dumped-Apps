@interface AWERecentContactsResponse : MTLModel
@property (nonatomic) NSNumber statusCode;
@property (nonatomic) NSArray userList;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)userList;
- (void)setUserList:;
- (id)statusCode;
- (void).cxx_destruct;
- (void)setStatusCode:;
+ (id)userListJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;
@end
