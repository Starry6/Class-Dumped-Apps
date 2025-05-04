@interface AWEMRSubscribeManageDisturbSectionViewModel : AWEBaseListSectionViewModel
@property (nonatomic) AWEMRSubscribeCounterMap counterMap;
@property (nonatomic) NSError networkError;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)networkError;
- (void)setNetworkError:;
- (void)counterDidReset:;
- (id)counterMap;
- (void)setCounterMap:;
- (void)updatesDisturbStatusTo:serviceAccount:;
- (void)updateDisturbStatusWithRequestModel:;
- (void).cxx_destruct;
@end
