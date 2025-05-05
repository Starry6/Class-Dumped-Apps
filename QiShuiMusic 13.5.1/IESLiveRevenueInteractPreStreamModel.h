@interface IESLiveRevenueInteractPreStreamModel : NSObject
@property (nonatomic) NSMutableDictionary trackParams;
@property (nonatomic) q lynxClickEventType;
@property (nonatomic) BOOL shouldShowTeamTaskView;
@property (nonatomic) UIView preStreamContainer;
@property (nonatomic) UIView extendView;
- (void)setTrackParams:;
- (id)extendView;
- (long long)lynxClickEventType;
- (id)preStreamContainer;
- (void)setExtendView:;
- (void)setLynxClickEventType:;
- (void)setPreStreamContainer:;
- (void)setShouldShowTeamTaskView:;
- (BOOL)shouldShowTeamTaskView;
- (id)trackParams;
- (id)init;
- (void).cxx_destruct;
@end
