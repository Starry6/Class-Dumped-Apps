@interface AWEListenFeedInteractionViewModel : NSObject
@property (nonatomic) AWEAwemeModel model;
@property (nonatomic) AWEMixVideoModel mixVideoModel;
@property (nonatomic) NSMutableArray extendModelArray;
@property (nonatomic) AWEListenFeedPlayModel playModel;
@property (nonatomic) AWEListenFeedContext context;
- (void)setPlayModel:;
- (id)playModel;
- (BOOL)isExtendStyle;
- (id)extendModelArray;
- (id)mixVideoModel;
- (void)setExtendModelArray:;
- (void)setMixVideoModel:;
- (long long)currentMaxEpisode;
- (BOOL)checkModelCanPlay:;
- (void)setModel:;
- (id)model;
- (void)setContext:;
- (void).cxx_destruct;
- (void)reset;
- (id)context;
- (long long)currentEpisode;
@end
