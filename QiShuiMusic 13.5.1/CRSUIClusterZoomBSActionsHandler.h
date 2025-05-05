@interface CRSUIClusterZoomBSActionsHandler : NSObject
@property (nonatomic) <CRSUIClusterZoomActionDelegate> delegate;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)setDelegate:;
- (id)_respondToActions:forFBSScene:inUIScene:fromTransitionContext:;
- (id)delegate;
- (void).cxx_destruct;
- (id)initWithDelegate:;
@end
