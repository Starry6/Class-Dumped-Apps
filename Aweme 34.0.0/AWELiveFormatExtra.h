@interface AWELiveFormatExtra : AWEBaseApiModel
@property (nonatomic) NSNumber vsSeasonId;
@property (nonatomic) NSNumber vsEpisodeId;
@property (nonatomic) NSString vsEpisodeStage;
@property (nonatomic) NSString vsAvatarStyle;
@property (nonatomic) NSNumber vsIsProtraitContent;
@property (nonatomic) NSNumber vsIsNew;
- (id)vsEpisodeStage;
- (id)vsEpisodeId;
- (id)vsSeasonId;
- (id)vsIsProtraitContent;
- (void)setVsSeasonId:;
- (void)setVsEpisodeId:;
- (void)setVsEpisodeStage:;
- (id)vsAvatarStyle;
- (void)setVsAvatarStyle:;
- (void)setVsIsProtraitContent:;
- (id)vsIsNew;
- (void)setVsIsNew:;
- (void).cxx_destruct;
+ (id)JSONKeyPathsByPropertyKey;
@end
