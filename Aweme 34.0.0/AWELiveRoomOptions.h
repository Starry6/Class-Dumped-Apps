@interface AWELiveRoomOptions : AWEBaseApiModel
@property (nonatomic) AWELiveRoomQuality defaultQuality;
@property (nonatomic) NSArray qualities;
@property (nonatomic) BOOL vpassDefault;
- (id)defaultQuality;
- (BOOL)vpassDefault;
- (void)setDefaultQuality:;
- (void)setVpassDefault:;
- (id)liveOptions;
- (id)initWithOptions:;
- (void).cxx_destruct;
- (id)qualities;
- (void)setQualities:;
@end
