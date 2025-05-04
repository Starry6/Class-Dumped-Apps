@interface AWEShareLiveFormatModel : NSObject
@property (nonatomic) <AWEShareLiveRoomModelProtocol> room;
@property (nonatomic) <AWEShareLiveContentModelProtocol> content;
@property (nonatomic) AWELiveEpisodeModel mappedEpisode;
@property (nonatomic) BOOL isLandscape;
- (void)setMappedEpisode:;
- (id)mappedEpisode;
- (id)content;
- (void)setContent:;
- (void).cxx_destruct;
- (id)room;
- (void)setRoom:;
- (void)setIsLandscape:;
- (BOOL)isLandscape;
@end
