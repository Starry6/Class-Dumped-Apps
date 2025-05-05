@interface BDASplashComplianceBaseViewModel : NSObject
@property (nonatomic) NSDictionary config;
@property (nonatomic) q complianceType;
@property (nonatomic) <BDASplashComplianceViewHolderDelegate> delegate;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)asyncGetImageWithImageInfo:key:completionBlock:;
- (void)asyncGetImageWithKey:completionBlock:;
- (BOOL)checkParams;
- (long long)complianceType;
- (long long)getModelType;
- (id)getViewWithFrame:viewHolder:;
- (id)initWithModel:delegate:;
- (BOOL)loadResource;
- (void)setComplianceType:;
- (id)splashImageWithImageInfo:Key:;
- (id)splashVideoDictWithVideoInfo:Key:;
- (void)setConfig:;
- (void)setDelegate:;
- (id)delegate;
- (void).cxx_destruct;
- (id)config;
+ (void)downloadResourceWithComplianceModel:downloadBlock:;
+ (id)getSplashHolderWithModel:delegate:;
@end
