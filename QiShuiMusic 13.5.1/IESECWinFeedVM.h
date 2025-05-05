@interface IESECWinFeedVM : NSObject
+ (id)sectionClassMap;
+ (id)getHeaderObjectWithMixFullItem:headerResponse:context:headerHybrid:sectionStyle:splitConfig:;
+ (id)getHeaderObjectWithSectionModel:headerResponse:context:;
+ (id)getObjectArrWithTabDataStatus:tab:context:;
+ (id)getObjectWithItem:context:index:tab:;
+ (BOOL)isNewRankIndexStart:;
+ (void)lynxCardappendExtraInfo:index:context:;
+ (id)mapperItemKey:itemType:;
+ (id)mapperKey:;
+ (id)objectsForListWithContext:headerResponse:tabs:status:;
+ (id)sectionControllerWithObject:context:;
@end
