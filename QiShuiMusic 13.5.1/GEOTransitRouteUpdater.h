@interface GEOTransitRouteUpdater : NSObject
@property (nonatomic) <GEOTransitRouteUpdaterDelegate> delegate;
@property (nonatomic) NSSet requests;
@property (nonatomic) BOOL active;
- (void)dealloc;
- (id)requests;
- (void)setRequests:;
- (void)setDelegate:;
- (id)delegate;
- (void).cxx_destruct;
- (void)setActive:;
- (BOOL)isActive;
- (id)initWithDelegate:andInitialTTL:;
@end
