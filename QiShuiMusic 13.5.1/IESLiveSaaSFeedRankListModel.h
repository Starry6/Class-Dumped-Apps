@interface IESLiveSaaSFeedRankListModel : BDDynamicMTLModel
@property (nonatomic) NSArray icon;
@property (nonatomic) NSArray background;
@property (nonatomic) NSString name;
@property (nonatomic) NSArray userLists;
@property (nonatomic) NSString h5Url;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
+ (id)userListsJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;
@end
