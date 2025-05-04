@interface AWEPlayletEpisodeProgressHistoryModel : NSObject
@property (nonatomic) NSString playletID;
@property (nonatomic) NSNumber currentEpisode;
@property (nonatomic) NSDictionary progressDict;
- (id)playletID;
- (void)setPlayletID:;
- (id)progressDict;
- (void)setProgressDict:;
- (void)encodeWithCoder:;
- (void).cxx_destruct;
- (id)initWithCoder:;
- (id)currentEpisode;
- (void)setCurrentEpisode:;
@end
