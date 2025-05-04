@interface AWELiveMultiInteractListModel : MTLModel
@property (nonatomic) NSArray users;
@property (nonatomic) Q enterFrom;
@property (nonatomic) NSArray items;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)setEnterFrom:;
- (unsigned long long)enterFrom;
- (id)items;
- (id)users;
- (void)setItems:;
- (void).cxx_destruct;
- (void)setUsers:;
+ (id)usersJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;
@end
