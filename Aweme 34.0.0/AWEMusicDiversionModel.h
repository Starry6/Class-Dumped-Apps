@interface AWEMusicDiversionModel : AWEBaseDataModel
@property (nonatomic) NSString lunaSongID;
@property (nonatomic) AWENewURLModel coverURL;
@property (nonatomic) NSInteger hitStrategy;
@property (nonatomic) NSString author;
@property (nonatomic) NSString title;
- (void)setLunaSongID:;
- (void)setHitStrategy:;
- (id)lunaSongID;
- (int)hitStrategy;
- (id)author;
- (void).cxx_destruct;
- (id)title;
- (void)setAuthor:;
- (void)setTitle:;
- (id)coverURL;
- (void)setCoverURL:;
+ (id)JSONKeyPathsByPropertyKey;
@end
