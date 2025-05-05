@interface IESECLiveAnchorAuthorStatsModel : IESECLiveApiBaseModel
@property (nonatomic) NSArray items;
@property (nonatomic) NSString descText;
- (id)descText;
- (void)setDescText:;
- (id)items;
- (void)setItems:;
- (void).cxx_destruct;
+ (id)itemsJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;
@end
