@interface AWEACCImageTemplateDataRequestProtocolImpl : NSObject
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)commonParams;
- (id)commonTrackParamsWith:;
- (void)requestPannelResponseModelWithCommonParams:currentImageSize:templateScene:currentImageURI:cropImageInfo:trackParams:;
- (void)addPannelResponseModelCallback:;
- (void)getTemplateListWithPannelResponseModel:templateCategoriesArray:shouldInsertTemplateAtFirst:insertTemplateModel:completion:;
- (void)requestTemplateDetialWithTemplateId:completion:;
- (id)getTemplateInfoModelWithDetailResponseModel:;
@end
