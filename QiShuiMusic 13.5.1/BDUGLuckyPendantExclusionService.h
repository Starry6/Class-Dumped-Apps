@interface BDUGLuckyPendantExclusionService : NSObject
@property (nonatomic) NSMutableArray pendantShowers;
@property (nonatomic) <BDUGLuckyPendantProtocol> currentPendantShower;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)currentPendantShower;
- (id)pendantShowers;
- (void)registerPendantShower:;
- (void)setCurrentPendantShower:;
- (void)setPendantShowers:;
- (void)unRegisterPendantShower:;
- (void)updatePendantShowerIfNeeded;
- (void).cxx_destruct;
+ (id)sharedInstance;
+ (id)serviceProtocol;
@end
