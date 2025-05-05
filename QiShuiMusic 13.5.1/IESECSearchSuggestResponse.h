@interface IESECSearchSuggestResponse : MTLModel
@property (nonatomic) NSArray suggestItems;
@property (nonatomic) NSString imprID;
@property (nonatomic) IESECSearchSuggestQueryRecord queryRecord;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)setQueryRecord:;
- (id)imprID;
- (id)queryRecord;
- (void)setImprID:;
- (void)setSuggestItems:;
- (id)suggestItems;
- (void).cxx_destruct;
+ (id)suggestItemsJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;
@end
