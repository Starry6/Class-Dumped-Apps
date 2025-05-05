@interface TSPKSingleAPICostTimeUploader : NSObject
@property (nonatomic) NSString apiType;
@property (nonatomic) NSMutableArray customCallTimeArray;
@property (nonatomic) NSMutableDictionary systemCallInfo;
@property (nonatomic) <TSPKLock> lock;
@property (nonatomic) NSString customUploadTitle;
@property (nonatomic) NSString uploadTitle;
- (void)reportWithInfo:;
- (void)setUploadTitle:;
- (id)customCallTimeArray;
- (id)customUploadTitle;
- (id)getCustomStatisticsKey;
- (id)getDefaultStatisticsKey;
- (id)getKeyWithContent:;
- (void)handleAPIAccessWithHashTag:beforeOrAfter:;
- (void)handleCustomAPIAccess;
- (id)initWithApiType:uploadTitle:customUploadTitle:;
- (void)setCustomCallTimeArray:;
- (void)setCustomUploadTitle:;
- (void)setSystemCallInfo:;
- (id)systemCallInfo;
- (id)uploadTitle;
- (id)lock;
- (void).cxx_destruct;
- (void)setLock:;
- (void)setApiType:;
- (id)apiType;
@end
