@interface IESLivePlaybackSettingsAPIImpl : NSObject
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)checkSaleTicketsStatus:completion:;
- (void)deletePlaybackWithEpisodeID:completion:;
- (void)updateVisibleScopeWithEpisodeID:visibilityRange:availableUids:blockUids:completion:;
@end
