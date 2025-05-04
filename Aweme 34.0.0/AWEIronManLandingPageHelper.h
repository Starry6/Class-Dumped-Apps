@interface AWEIronManLandingPageHelper : NSObject
+ (id)trackParamsFromEnterFromType:;
+ (id)paramForSpecialWithEntranceType:;
+ (id)sourceFromEnterFromType:;
+ (id)mergeTrackParamsFromParams:commons:;
+ (id)highQualityImageURLWithBaseName:useTheme:;
+ (id)pageTypeWithEntranceType:;
+ (id)bdpLogFromEnterFromType:;
+ (id)sceneFromEnterFromType:;
+ (id)entranceFormViaEnterFromType:;
+ (id)fromPageFromEnterFromType:subSource:;
+ (id)searchEmptyImageURL;
+ (id)searchSourceFromSearchRange:;
+ (void)fetchSidebarGuidanceWithEnterFrom:complection:;
+ (void)showSidebarGuidanceWithData:enterFrom:onView:;
+ (id)backgroundImageURL;
@end
