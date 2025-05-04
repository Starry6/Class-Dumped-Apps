@interface AWEMediaSongInfoModel : AWEBaseApiModel
@property (nonatomic) NSString groupId;
@property (nonatomic) NSString songId;
@property (nonatomic) NSString title;
@property (nonatomic) NSString subTitle;
- (void)setSongId:;
- (void)setGroupId:;
- (id)groupId;
- (void)setSubTitle:;
- (id)subTitle;
- (void).cxx_destruct;
- (id)title;
- (void)setTitle:;
- (id)songId;
+ (id)JSONKeyPathsByPropertyKey;
@end
