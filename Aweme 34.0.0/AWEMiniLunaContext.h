@interface AWEMiniLunaContext : NSObject
@property (nonatomic) AWEUserModel userModel;
@property (nonatomic) AWEMusicDSPEventModel eventModel;
@property (nonatomic) <MusicService> musicService;
@property (nonatomic) NSDictionary extraParams;
- (void)setExtraParams:;
- (id)extraParams;
- (id)musicService;
- (void)setMusicService:;
- (id)eventModel;
- (void)setEventModel:;
- (void)setUserModel:;
- (void).cxx_destruct;
- (id)userModel;
@end
