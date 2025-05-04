@interface AWEVersionUpdateNetworkModule : NSObject
@property (nonatomic) MMKV mmkv;
@property (nonatomic) AWEVersionUpdateReleaseModel releaseInfo;
@property (nonatomic) <AWEHPNetCombineSubscriberAbility> combineAbility;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)setMmkv:;
- (id)mmkv;
- (void)setupAbility:;
- (long long)checkNewVersionResult;
- (void)fetchLatestVersionInfoWithBody:completion:;
- (id)combineAbility;
- (void)setCombineAbility:;
- (void)checkNewVersionWithBody:completion:;
- (id)releaseInfo;
- (void)setReleaseInfo:;
- (void)handleResponse:;
- (void).cxx_destruct;
- (void)handleResponse:completion:;
@end
