@interface AWEMusicMetaStruct : AWEBaseApiModel
@property (nonatomic) NSNumber rawRank;
@property (nonatomic) NSString clipName;
@property (nonatomic) NSString clipAuthor;
@property (nonatomic) NSNumber musicId;
@property (nonatomic) NSArray clipCoverUrl;
- (void)setMusicId:;
- (id)musicId;
- (id)rawRank;
- (void)setRawRank:;
- (id)clipAuthor;
- (void)setClipAuthor:;
- (id)clipCoverUrl;
- (void)setClipCoverUrl:;
- (void).cxx_destruct;
- (id)clipName;
- (void)setClipName:;
+ (id)JSONKeyPathsByPropertyKey;
@end
