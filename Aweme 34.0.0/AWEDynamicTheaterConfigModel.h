@interface AWEDynamicTheaterConfigModel : MTLModel
@property (nonatomic) AWETheaterListDecorationModel listDecoration;
@property (nonatomic) NSArray cardDescription;
@property (nonatomic) NSArray cardConfig;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)setCardConfig:;
- (id)cardConfig;
- (id)listDecoration;
- (void)setListDecoration:;
- (void).cxx_destruct;
- (id)cardDescription;
- (void)setCardDescription:;
+ (id)cardConfigJSONTransformer;
+ (id)cardDescriptionJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;
@end
