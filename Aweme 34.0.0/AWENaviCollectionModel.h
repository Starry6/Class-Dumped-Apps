@interface AWENaviCollectionModel : MTLModel
@property (nonatomic) NSArray items;
@property (nonatomic) NSString collectionName;
@property (nonatomic) NSString thumbnailURL;
@property (nonatomic) q resetType;
@property (nonatomic) BOOL isAllSelected;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)validItems;
- (unsigned long long)featureDataType;
- (BOOL)isAllSelected;
- (void)setResetType:;
- (void)select;
- (id)items;
- (void)setItems:;
- (BOOL)isValid;
- (void).cxx_destruct;
- (id)collectionName;
- (void)unselect;
- (id)thumbnailURL;
- (void)updateItems:;
- (long long)resetType;
+ (id)itemsJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;
@end
