@interface AWEFavoriteFolderRefreshModel : MTLModel
@property (nonatomic) q favoriteFolderID;
@property (nonatomic) Q filterReason;
@property (nonatomic) NSNumber totalItemsNumber;
@property (nonatomic) NSString favoriteFolderName;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (unsigned long long)filterReason;
- (void)setFilterReason:;
- (id)favoriteFolderName;
- (void)setFavoriteFolderName:;
- (long long)favoriteFolderID;
- (void)setFavoriteFolderID:;
- (id)totalItemsNumber;
- (void)setTotalItemsNumber:;
- (void).cxx_destruct;
+ (id)authorJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;
@end
