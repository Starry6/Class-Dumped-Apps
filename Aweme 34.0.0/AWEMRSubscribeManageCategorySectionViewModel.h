@interface AWEMRSubscribeManageCategorySectionViewModel : AWEBaseListSectionViewModel
@property (nonatomic) AWEMRSubscribeCounterMap counterMap;
@property (nonatomic) NSError networkError;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)networkError;
- (void)setNetworkError:;
- (void)counterDidReset:;
- (void)updatesChannelSubscribeStatusTo:subcategory:;
- (void)updatesSubcategorySubscribeStatusWithRequestModel:subcategory:;
- (id)counterMap;
- (id)getSubcategoryOfSubcategoryId:;
- (void)setCounterMap:;
- (void).cxx_destruct;
@end
