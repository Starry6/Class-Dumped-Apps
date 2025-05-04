@interface AWESearchLifeServiceVideoDataController : AWESearchLifeServiceBaseDataController
- (Class)customResponseClass;
- (Class)customRequestParamsClass;
- (void)refreshResponse:;
- (id)customInnerVCModelsFromOuterDataModels:;
- (id)customAwemeModelFromOuterDataModel:;
@end
