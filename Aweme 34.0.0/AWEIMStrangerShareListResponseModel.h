@interface AWEIMStrangerShareListResponseModel : MTLModel
@property (nonatomic) NSNumber statusCode;
@property (nonatomic) NSArray users;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)statusCode;
- (id)users;
- (void).cxx_destruct;
- (void)setStatusCode:;
- (void)setUsers:;
+ (id)usersJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;
@end
