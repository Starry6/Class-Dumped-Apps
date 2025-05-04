@interface AWESearchTeenAlbumDisplayCardModel : AWEBaseApiModel
@property (nonatomic) NSString albumID;
@property (nonatomic) NSString title;
@property (nonatomic) NSString coverUrl;
@property (nonatomic) NSNumber orientation;
@property (nonatomic) NSNumber itemNum;
@property (nonatomic) NSNumber playCount;
- (void)setCoverUrl:;
- (id)coverUrl;
- (void)setAlbumID:;
- (id)itemNum;
- (void)setItemNum:;
- (void)setOrientation:;
- (id)playCount;
- (void).cxx_destruct;
- (id)title;
- (id)orientation;
- (void)setTitle:;
- (void)setPlayCount:;
- (id)albumID;
+ (id)JSONKeyPathsByPropertyKey;
@end
