@interface AWEIMBulletContainerClientDataExtraInfo : MTLModel
@property (nonatomic) AWEIMBulletContainerClientDataLiveInfo liveInfo;
@property (nonatomic) AWEIMBulletContainerClientDataAwemeInfo awemeInfo;
@property (nonatomic) NSDictionary logInfo;
@property (nonatomic) NSString shareMergeContext;
@property (nonatomic) double serverTime;
@property (nonatomic) NSDictionary bizInfo;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)awemeInfo;
- (void)setAwemeInfo:;
- (id)logInfo;
- (void)setLogInfo:;
- (void)setServerTime:;
- (id)liveInfo;
- (void)setLiveInfo:;
- (id)bizInfo;
- (void)setBizInfo:;
- (void)configDataWithMessage:;
- (void)configServerTime;
- (void)configLogInfoWithRouterParams:conversation:message:;
- (void)setShareMergeContext:;
- (id)shareMergeContext;
- (double)serverTime;
- (void).cxx_destruct;
+ (id)JSONKeyPathsByPropertyKey;
@end
