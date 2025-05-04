@interface AWEOriginalSoundTrackManager : NSObject
@property (nonatomic) BOOL isRequestOnAir;
@property (nonatomic) NSString userID;
- (BOOL)isRequestOnAir;
- (void)setIsRequestOnAir:;
- (id)initWithUserID:;
- (void)loadMoreWithCursor:count:scene:responseBlock:completion:;
- (void)loadMoreWithLoadOptions:scene:responseBlock:completion:;
- (id)mediaModelWithMusicModel:;
- (id)userID;
- (void).cxx_destruct;
- (void)setUserID:;
+ (void)loadPerformanceListWithUserId:cursor:count:responseBlock:completion:;
@end
