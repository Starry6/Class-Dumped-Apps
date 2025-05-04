@interface AWESearchLifeServiceLiveDataController : AWESearchCachalotLiveDataController
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)handlePatchResponse:;
- (id)customSearchType;
- (Class)customResponseClass;
- (Class)customRequestParamsClass;
- (id)p_getValidResponse:;
@end
