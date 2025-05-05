@interface IESECWinHeaderSectionModel : MTLModel
@property (nonatomic) IESECWinHeaderSectionStyle sectionStyle;
@property (nonatomic) NSArray items;
@property (nonatomic) Q splitConfigType;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (unsigned long long)splitConfigType;
- (void)setSectionStyle:;
- (void)setSplitConfigType:;
- (id)items;
- (void)setItems:;
- (void).cxx_destruct;
- (id)sectionStyle;
+ (id)itemsJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;
@end
