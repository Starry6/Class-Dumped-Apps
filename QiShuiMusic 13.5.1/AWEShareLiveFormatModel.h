@interface AWEShareLiveFormatModel : NSObject
@property (nonatomic) <AWEShareLiveRoomModelProtocol> room;
@property (nonatomic) <AWEShareLiveContentModelProtocol> content;
@property (nonatomic) AWELiveEpisodeModel mappedEpisode;
@property (nonatomic) BOOL isLandscape;
- (id)mappedEpisode;
- (void)setMappedEpisode:;
- (id)content;
- (void)setContent:;
- (BOOL)isLandscape;
- (void)setIsLandscape:;
- (void).cxx_destruct;
- (id)room;
- (void)setRoom:;
@end
