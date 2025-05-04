@interface AWEIMRecommendUserModel_TagInfo : IESIMBaseApiModel
@property (nonatomic) NSString tagDesc;
@property (nonatomic) q tagStyle;
@property (nonatomic) q tagType;
- (id)tagDesc;
- (void)setTagDesc:;
- (long long)tagStyle;
- (void)setTagStyle:;
- (long long)tagType;
- (void).cxx_destruct;
- (void)setTagType:;
+ (id)tagStyleJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;
+ (id)tagTypeJSONTransformer;
@end
