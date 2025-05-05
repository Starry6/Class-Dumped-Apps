@interface SBSHomeScreenServiceInstalledWebClipsObservationAssertion : NSObject
@property (nonatomic) BOOL invalidated;
@property (nonatomic) SBSHomeScreenService service;
@property (nonatomic) <SBSHomeScreenServiceInstalledWebClipsObserver> observer;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)setService:;
- (void)dealloc;
- (BOOL)isInvalidated;
- (id)service;
- (void)setInvalidated:;
- (void).cxx_destruct;
- (id)initWithObserver:service:;
- (void)invalidate;
- (id)observer;
@end
