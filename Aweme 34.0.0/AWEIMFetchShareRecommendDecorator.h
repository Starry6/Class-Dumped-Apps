@interface AWEIMFetchShareRecommendDecorator : NSObject
+ (BOOL)__canInsertGroup:dataSource:;
+ (BOOL)__canInsertThirdRecommendShareModel:dataSource:;
+ (BOOL)__isHighestPriorityTargetAtIndex:ofTranspondList:inCandidateModels:;
+ (BOOL)__insertCurrentModel:toList:targetInsertIndex:;
+ (BOOL)__isSocialGroupWithShareModel:;
+ (id)__socialGroupsInShareModelList:;
+ (id)insertRecommendDecorator;
+ (id)__sortedInsertIndexes;
+ (id)__targetTypeAtIndex:;
+ (id)__candidateShareModelsWithType:dataSourcee:;
+ (BOOL)__checkNeedInsertTargetType:targetInsertIndex:transpondList:candidateModels:;
+ (BOOL)__checkCurrentCandidateModelMeetTheRequirements:type:dataSource:;
+ (void)__updateTrackInfoForCandidateModel:targetType:dataSource:;
+ (id)__candidateThiredRecommendDataWithDataSource:;
+ (id)__candidateIntimateGroupData;
+ (id)__candidateRecentShareGroupData;
+ (id)__getShareThirdRecommendMapWithDataSource:;
+ (BOOL)__checkNeedInsertIntimateGroupWithIndex:transpondList:candidateModels:;
+ (BOOL)__checkNeedInsertRecentShareGroupWithIndex:transpondList:;
@end
