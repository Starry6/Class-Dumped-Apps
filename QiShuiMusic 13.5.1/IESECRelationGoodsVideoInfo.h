@interface IESECRelationGoodsVideoInfo : MTLModel
@property (nonatomic) NSString videoID;
@property (nonatomic) IESECURLModel cover;
@property (nonatomic) IESECURLModel url;
@property (nonatomic) q maximumDuration;
@property (nonatomic) Q type;
@property (nonatomic) IESECRelationGoodsVideoInfoPlayerIcon playerIcon;
@property (nonatomic) BOOL showPlayerIconWhenStatic;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)cover;
- (id)playerIcon;
- (void)setCover:;
- (void)setPlayerIcon:;
- (void)setShowPlayerIconWhenStatic:;
- (BOOL)showPlayerIconWhenStatic;
- (id)url;
- (void)setType:;
- (void)setUrl:;
- (unsigned long long)type;
- (long long)maximumDuration;
- (void).cxx_destruct;
- (void)setMaximumDuration:;
- (id)videoID;
- (void)setVideoID:;
+ (id)JSONKeyPathsByPropertyKey;
@end
