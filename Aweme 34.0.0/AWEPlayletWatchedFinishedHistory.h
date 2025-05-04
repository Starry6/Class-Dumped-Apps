@interface AWEPlayletWatchedFinishedHistory : NSObject
@property (nonatomic) NSString playletID;
@property (nonatomic) NSString awemeID;
@property (nonatomic) NSNumber episodeNum;
@property (nonatomic) q materialType;
- (void)setAwemeID:;
- (id)awemeID;
- (id)playletID;
- (void)setPlayletID:;
- (void)setEpisodeNum:;
- (id)episodeNum;
- (void).cxx_destruct;
- (long long)materialType;
- (void)setMaterialType:;
@end
