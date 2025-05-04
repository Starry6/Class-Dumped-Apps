@interface AWEECShoppingGuideMessageSourceModel : MTLModel
@property (nonatomic) NSString rawQuery;
@property (nonatomic) NSString queryText;
@property (nonatomic) NSDictionary queryExtra;
@property (nonatomic) NSString queryType;
@property (nonatomic) NSString queryTextID;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)rawQuery;
- (void)setRawQuery:;
- (void)setQueryText:;
- (void)setQueryExtra:;
- (void)setQueryTextID:;
- (id)queryTextID;
- (id)queryText;
- (id)queryExtra;
- (id)queryType;
- (void).cxx_destruct;
- (void)setQueryType:;
+ (id)JSONKeyPathsByPropertyKey;
@end
