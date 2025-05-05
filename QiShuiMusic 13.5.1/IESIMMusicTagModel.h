@interface IESIMMusicTagModel : IESIMBaseApiModel
@property (nonatomic) NSString tagTitle;
@property (nonatomic) NSString tagTitleColor;
@property (nonatomic) NSString tagColor;
@property (nonatomic) NSString tagBorderColor;
@property (nonatomic) NSString tagTitleLightColor;
@property (nonatomic) NSString tagLightColor;
@property (nonatomic) NSString tagBorderLightColor;
@property (nonatomic) NSString tagType;
- (void)setTagBorderColor:;
- (void)setTagBorderLightColor:;
- (void)setTagLightColor:;
- (void)setTagTitle:;
- (void)setTagTitleColor:;
- (void)setTagTitleLightColor:;
- (id)tagBorderColor;
- (id)tagBorderLightColor;
- (id)tagLightColor;
- (id)tagTitle;
- (id)tagTitleColor;
- (id)tagTitleLightColor;
- (id)tagType;
- (void).cxx_destruct;
- (void)setTagType:;
- (id)tagColor;
- (void)setTagColor:;
+ (id)JSONKeyPathsByPropertyKey;
@end
