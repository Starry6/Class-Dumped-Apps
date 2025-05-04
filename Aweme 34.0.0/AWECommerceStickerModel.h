@interface AWECommerceStickerModel : AWEBaseApiModel
@property (nonatomic) q stickerID;
@property (nonatomic) AWEURLModel iconURLModel;
@property (nonatomic) NSString letters;
@property (nonatomic) NSString openURL;
@property (nonatomic) NSString webURL;
@property (nonatomic) NSString webURLTitle;
- (void)setOpenURL:;
- (void)setStickerID:;
- (long long)stickerID;
- (id)iconURLModel;
- (void)setIconURLModel:;
- (id)webURLTitle;
- (void)setWebURLTitle:;
- (void)setLetters:;
- (id)letters;
- (void)setWebURL:;
- (void).cxx_destruct;
- (id)webURL;
- (id)openURL;
+ (id)iconURLModelTransformer;
+ (id)JSONKeyPathsByPropertyKey;
@end
