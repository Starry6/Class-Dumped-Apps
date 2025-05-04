@interface AWESearchGeneralCardNameProcessor : NSObject
+ (id)adExtraDataFromDynamicPatch:;
+ (id)adCardNameFromModel:;
+ (BOOL)isAdCard:;
+ (id)cardNameFromModel:andRenderModel:;
+ (id)refreshExtraInfoFromModel:;
+ (id)getAdDataFromDynamicPatch:;
+ (id)adExtraDataFromModel:;
+ (id)cardNameFromAdModel:andRenderModel:;
+ (id)cardNameFromNonAdModel:andRenderModel:;
+ (id)adExtraDataFromSearchModel:;
+ (id)getOriginAdRefreshedExtraInfo:;
+ (id)nonAdCardNameFromModel:awemeModel:;
@end
