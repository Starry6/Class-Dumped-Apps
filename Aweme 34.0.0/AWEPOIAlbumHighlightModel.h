@interface AWEPOIAlbumHighlightModel : AWEBaseApiModel
@property (nonatomic) NSString title;
@property (nonatomic) NSString titleColor;
@property (nonatomic) NSString subtitle;
@property (nonatomic) NSString subtitleColor;
@property (nonatomic) NSString tag;
- (id)titleColor;
- (id)tag;
- (id)subtitle;
- (void)setTag:;
- (void)setTitleColor:;
- (void)setSubtitle:;
- (void).cxx_destruct;
- (id)title;
- (void)setTitle:;
- (id)subtitleColor;
- (void)setSubtitleColor:;
+ (id)JSONKeyPathsByPropertyKey;
@end
