@interface MNAlternateRoutesUpdater : NSObject
@property (nonatomic) NSArray alternateRoutes;
- (id)alternateRoutes;
- (void).cxx_destruct;
- (BOOL)updateForLocation:;
- (BOOL)setAlternateRoutes:forMainRoute:;
- (BOOL)updateForReroute:rerouteReason:;
@end
