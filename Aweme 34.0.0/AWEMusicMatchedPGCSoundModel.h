@interface AWEMusicMatchedPGCSoundModel : AWEBaseDataModel
@property (nonatomic) q clipId;
@property (nonatomic) NSString author;
@property (nonatomic) NSString title;
@property (nonatomic) NSString mixedTitle;
@property (nonatomic) NSString mixedAuthor;
@property (nonatomic) AWENewURLModel coverMediumModel;
- (void)setClipId:;
- (void)setMixedTitle:;
- (void)setMixedAuthor:;
- (void)setCoverMediumModel:;
- (id)mixedAuthor;
- (long long)clipId;
- (id)coverMediumModel;
- (id)author;
- (void).cxx_destruct;
- (id)title;
- (void)setAuthor:;
- (void)setTitle:;
- (id)mixedTitle;
+ (id)JSONKeyPathsByPropertyKey;
@end
