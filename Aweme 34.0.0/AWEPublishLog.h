@interface AWEPublishLog : NSObject
+ (void)mainInfoWithAlbumStageType:stageStatus:content:;
+ (void)mainErrorWithAlbumStageType:stageStatus:content:errorCode:;
+ (void)mainInfoWithStageType:stageStatus:content:;
+ (void)mainErrorWithStageType:stageStatus:content:errorCode:;
+ (id)stageNameWithType:;
+ (void)p_mainInfoWithStageType:stageStatus:content:;
+ (void)p_mainErrorWithStageType:stageStatus:content:errorCode:;
+ (id)stageNameWithAlbumStageType:;
+ (id)stageStageWithStatus:;
+ (void)mainInfoWithContent:;
@end
