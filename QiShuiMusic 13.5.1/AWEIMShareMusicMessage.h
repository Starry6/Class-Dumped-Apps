@interface AWEIMShareMusicMessage : AWEIMMessage
@property (nonatomic) NSString title;
@property (nonatomic) q userCount;
@property (nonatomic) NSArray coverURLArray;
@property (nonatomic) NSString musicID;
@property (nonatomic) NSString pushDetail;
@property (nonatomic) IESIMURLModel musicCoverURL;
- (id)musicID;
- (id)coverURLArray;
- (id)getContentDict;
- (id)initWithContentDict:;
- (id)musicCoverURL;
- (id)pushDetail;
- (void)setCoverURLArray:;
- (void)setMusicCoverURL:;
- (void)setMusicID:;
- (void)setPushDetail:;
- (void)setTitle:;
- (id)title;
- (void).cxx_destruct;
- (id)copyWithZone:;
- (long long)userCount;
- (void)setUserCount:;
@end
