@interface AWEDoubleColumnSearchMerchandiseFilterOptionInfoModel : AWEBaseApiModel
@property (nonatomic) NSString option;
@property (nonatomic) NSString optionID;
@property (nonatomic) NSString optionType;
@property (nonatomic) NSArray optionWordList;
- (void)setOptionID:;
- (id)optionWordList;
- (void)setOptionWordList:;
- (void)setOptionType:;
- (void)setOption:;
- (void).cxx_destruct;
- (id)optionID;
- (id)option;
- (id)optionType;
+ (id)optionWordListJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;
@end
