@interface AWESearchMusicHeaderInfoModel : AWEBaseApiModel
@property (nonatomic) NSString type;
@property (nonatomic) NSString name;
@property (nonatomic) NSArray items;
@property (nonatomic) NSString searchResultId;
- (id)searchResultId;
- (void)setSearchResultId:;
- (BOOL)isSortTab;
- (BOOL)isPlayAllTab;
- (id)items;
- (void)setItems:;
- (id)type;
- (void)setType:;
- (void).cxx_destruct;
- (void)setName:;
- (id)name;
+ (id)itemsJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;
@end
