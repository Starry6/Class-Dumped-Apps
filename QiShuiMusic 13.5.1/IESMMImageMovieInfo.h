@interface IESMMImageMovieInfo : NSObject
@property (nonatomic) NSMutableArray imageArray;
@property (nonatomic) NSMutableArray imagePathArray;
@property (nonatomic) NSMutableDictionary imageShowDuration;
@property (nonatomic) AVAsset backGroundVideo;
@property (nonatomic) BOOL needTransition;
- (id)backGroundVideo;
- (id)imageArray;
- (id)imagePathArray;
- (id)imageShowDuration;
- (BOOL)needTransition;
- (void)setBackGroundVideo:;
- (void)setImageArray:;
- (void)setImagePathArray:;
- (void)setImageShowDuration:;
- (void)setNeedTransition:;
- (id)init;
- (void).cxx_destruct;
- (id)copyWithZone:;
@end
