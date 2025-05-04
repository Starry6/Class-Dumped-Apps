@interface AWEFriendsImpl.AwemeFamiliarGroupResponse : AWEBaseApiModel
@property (nonatomic) NSArray itemList;
- (id)initWithDictionary:error:;
- (id)init;
- (void).cxx_destruct;
- (id)initWithCoder:;
- (id)itemList;
- (void)setItemList:;
+ (id)itemListJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;
@end
