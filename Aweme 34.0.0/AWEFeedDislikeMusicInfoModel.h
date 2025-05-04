@interface AWEFeedDislikeMusicInfoModel : AWEFeedDislikeBaseInfoModel
@property (nonatomic) NSString musicID;
@property (nonatomic) NSString musicPGCTitle;
- (id)musicID;
- (void)setMusicID:;
- (id)musicPGCTitle;
- (void)setMusicPGCTitle:;
- (void)encodeWithCoder:;
- (id)description;
- (void).cxx_destruct;
- (id)mutableCopyWithZone:;
- (id)initWithCoder:;
- (id)copyWithZone:;
@end
