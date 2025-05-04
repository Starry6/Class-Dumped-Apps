@interface AWESearchMusicPlayListInfoModel : AWEBaseApiModel
@property (nonatomic) NSString title;
@property (nonatomic) q musicCount;
@property (nonatomic) NSString nickname;
@property (nonatomic) NSArray urlList;
- (long long)musicCount;
- (void)setMusicCount:;
- (id)nickname;
- (void).cxx_destruct;
- (id)title;
- (void)setTitle:;
- (void)setNickname:;
- (id)urlList;
- (void)setUrlList:;
+ (id)JSONKeyPathsByPropertyKey;
@end
