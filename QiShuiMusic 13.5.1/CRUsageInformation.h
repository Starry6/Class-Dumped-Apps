@interface CRUsageInformation : NSObject
@property (nonatomic) CRCarKitServiceClient serviceClient;
@property (nonatomic) BOOL shouldSuggestCarPlayTips;
- (id)init;
- (void)setServiceClient:;
- (id)serviceClient;
- (void).cxx_destruct;
- (BOOL)shouldSuggestCarPlayTips;
@end
