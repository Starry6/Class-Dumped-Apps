@interface BDARVAdDataMappingManager : NSObject
+ (id)safeDictionary:;
+ (id)makeDataWithAdDataModel:logExtra:;
+ (id)mappingBenefitComponentDataWithStyleTemplateModel:;
+ (id)mappingBottomBigCardComponentDataWithStyleTemplateModel:;
+ (id)mappingComponentMetaWitCode:styleTemplateModel:;
+ (id)mappingDownloadBasicInfoComponentDataWithStyleTemplateModel:;
+ (id)mappingFinishPlayMaskComponentDataWithStyleTemplateModel:;
+ (id)mappingGeneralComponentDataWithStyleTemplateModel:;
+ (id)mappingInteractiveCardComponentDataWithStyleTemplateModel:;
+ (id)mappingLiveComponentDataWithStyleTemplateModel:;
+ (id)mappingNotDownloadComponentDataWithStyleTemplateModel:;
+ (id)mappingPicAndTextComponentDataWithStyleTemplateModel:;
+ (id)mappingRawDataWithItemDic:;
+ (id)mappingToOriginalWithItemDic:;
+ (id)parseAdDataWithItemDic:;
+ (id)parseStyleTemplateWithItemDic:;
+ (BOOL)styleSameWithJsonObj:;
+ (id)urlArrayTransform:;
@end
