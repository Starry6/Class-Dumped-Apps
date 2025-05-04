@interface AWEGDBizAbilityProvider : NSObject
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)getMainRequestProvider:;
- (id)getDownGradeH5Provider:;
- (id)getDitoProvider:;
- (id)getPreReqProvider:;
- (id)getPreloadProvider:;
- (id)getTrackerProvider:;
- (id)getRecoveryProvider:;
@end
