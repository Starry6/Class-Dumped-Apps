@interface AWEConcernFeedRequestCommonParamProvider : NSObject
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)addressBookAccess;
- (id)monitorParams;
- (id)liveModuleService;
- (id)commonParamsWithPullType:;
- (id)sequenceFeatureParams;
- (id)locationAccess;
- (id)getExpectedSizeInfo;
- (id)extraParamsWithPullType:currentParams:;
@end
