@interface AWEMusicNewTagModel : AWEBaseDataModel
@property (nonatomic) NSString tagTitle;
@property (nonatomic) NSString tagTitleColor;
@property (nonatomic) NSString tagColor;
@property (nonatomic) NSString tagBorderColor;
@property (nonatomic) NSString tagType;
@property (nonatomic) NSString tagTitleLightColor;
@property (nonatomic) NSString tagLightColor;
@property (nonatomic) NSString tagBorderLightColor;
- (void)setTagTitle:;
- (void)setTagTitleColor:;
- (void)setTagBorderColor:;
- (void)setTagTitleLightColor:;
- (void)setTagLightColor:;
- (void)setTagBorderLightColor:;
- (id)tagBorderLightColor;
- (id)tagLightColor;
- (id)tagTitleLightColor;
- (id)tagTitle;
- (id)tagTitleColor;
- (id)tagBorderColor;
- (id)tagType;
- (void).cxx_destruct;
- (void)setTagType:;
- (void)setTagColor:;
- (id)tagColor;
+ (id)JSONKeyPathsByPropertyKey;
@end
