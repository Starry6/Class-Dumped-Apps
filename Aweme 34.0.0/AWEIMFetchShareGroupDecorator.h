@interface AWEIMFetchShareGroupDecorator : NSObject
+ (BOOL)__isHighestPriorityTargetAtIndex:ofTranspondList:inCandidateModels:;
+ (id)__targetInsertIndexs;
+ (id)__candidateGroupList;
+ (BOOL)__enableIntimateGroupInsertionOptimize;
+ (BOOL)__checkNeedInsertIntimateGroupWithShareModel:targetInsertIndex:transpondList:candidateModels:;
+ (BOOL)__checkNeedInsertNormalGroupWithShareModel:;
+ (BOOL)__checkCurrentCandidateModelMeetTheRequirements:dataSource:;
+ (BOOL)__insertCurrentModel:toList:targetInsertIndex:;
+ (BOOL)__isSocialGroupWithShareModel:;
+ (id)insertGroupDecorator;
+ (id)__socialGroupsInShareModelList:;
@end
