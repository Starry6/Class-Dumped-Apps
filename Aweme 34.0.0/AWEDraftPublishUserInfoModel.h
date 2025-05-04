@interface AWEDraftPublishUserInfoModel : NSObject
@property (nonatomic) Q privateType;
@property (nonatomic) AWERepoUserStatusInfo userStatusInfo;
- (unsigned long long)privateType;
- (void)setPrivateType:;
- (id)userStatusInfo;
- (void)setUserStatusInfo:;
- (void).cxx_destruct;
+ (id)sharedInstance;
@end
