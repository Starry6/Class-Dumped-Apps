@interface CSJPlayerTimeObserverModel : NSObject
@property (nonatomic) BOOL haveSeek;
@property (nonatomic) BUPlayer player;
@property (nonatomic) CSJAdInfoViewModel infoViewModel;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)_update_playerView_gaosi;
- (void)executeDynamicJsonTypeLogic;
- (BOOL)haveSeek;
- (id)infoViewModel;
- (void)player:second:;
- (void)setHaveSeek:;
- (void)setInfoViewModel:;
- (id)player;
- (void).cxx_destruct;
- (void)setPlayer:;
@end
