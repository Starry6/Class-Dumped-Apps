@interface AWESocialUserItemModel : MTLModel
@property (nonatomic) NSString userID;
@property (nonatomic) NSArray itemList;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)userID;
- (void).cxx_destruct;
- (void)setUserID:;
- (id)itemList;
- (void)setItemList:;
+ (id)itemListJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;
@end
