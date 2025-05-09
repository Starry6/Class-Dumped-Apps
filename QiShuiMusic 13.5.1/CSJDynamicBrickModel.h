@interface CSJDynamicBrickModel : NSObject
@property (nonatomic) NSDictionary originDictionary;
@property (nonatomic) NSString originType;
@property (nonatomic) NSString type;
@property (nonatomic) NSString dataString;
@property (nonatomic) NSArray dataArray;
@property (nonatomic) NSDictionary dataDict;
@property (nonatomic) @ dataExtraInfo;
@property (nonatomic) NSString clickType;
@property (nonatomic) q areaType;
@property (nonatomic) q clickAreaCategory;
@property (nonatomic) CSJDynamicBrickValuesModel nightThemeValues;
@property (nonatomic) CSJDynamicBrickValuesModel values;
- (id)dictionaryValueNotIncludeValues;
- (long long)clickAreaCategory;
- (id)clickType;
- (id)csj_dictionaryValue;
- (id)dataDict;
- (id)dataExtraInfo;
- (long long)dynamicBrickLogoType;
- (long long)fromJS_convertAreaType:;
- (void)fromJS_updateAreaType;
- (id)getBrickData;
- (id)nightThemeValues;
- (id)originDictionary;
- (long long)qa_clickAreaType;
- (void)setClickAreaCategory:;
- (void)setClickType:;
- (void)setDataDict:;
- (void)setDataExtraInfo:;
- (void)setNightThemeValues:;
- (void)setOriginDictionary:;
- (id)values;
- (id)initWithDictionary:;
- (void)setType:;
- (id)type;
- (void).cxx_destruct;
- (void)setValues:;
- (id)dataArray;
- (void)setDataArray:;
- (id)dataString;
- (void)setDataString:;
- (long long)areaType;
- (void)setAreaType:;
- (id)originType;
- (void)setOriginType:;
@end
