@interface AWEIMStrangerShareListResponseModel : MTLModel
@property (nonatomic) NSNumber statusCode;
@property (nonatomic) NSArray users;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)users;
- (void)setStatusCode:;
- (id)statusCode;
- (void).cxx_destruct;
- (void)setUsers:;
+ (id)usersJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;
@end
