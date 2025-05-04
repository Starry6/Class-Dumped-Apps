@interface AWEMRSubscribeManageSwitchSectionViewModel : AWEBaseListSectionViewModel
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
- (void)updateSubscribeStatusTo:serviceAccount:;
- (void)updateSubscribeStatusWithRequestModel:;
- (void).cxx_destruct;
@end
