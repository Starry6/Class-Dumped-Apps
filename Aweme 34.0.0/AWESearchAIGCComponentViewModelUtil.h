@interface AWESearchAIGCComponentViewModelUtil : NSObject
+ (BOOL)isMixCardNodeVM:;
+ (BOOL)isBubbleNodeVM:;
+ (BOOL)isAIChatNodeVM:;
+ (id)nodeTypeName:;
+ (BOOL)isAISSEAnswerNodeVM:;
+ (BOOL)isTimestampNodeVM:;
+ (BOOL)isShareNotEnableVM:;
+ (BOOL)isAIQuestionNodeVM:;
+ (id)createNativeNodeWithContext:dataType:viewType:dataModel:;
+ (BOOL)enableSearchAIGCDisableAIEntrance;
+ (id)createDynamicNodeWithContext:useWeb:renderModel:dataModel:;
+ (id)createDynamicNodeWithContext:useWeb:renderModel:dataModel:logData:;
+ (BOOL)isAIChatWebNodeVM:;
+ (BOOL)isAIEntranceNodeVM:;
+ (BOOL)isFormatAINodeVM:;
+ (BOOL)isSkeletonNodeVM:;
+ (BOOL)isAIChatOperationNodeVM:;
+ (BOOL)isVoiceLoadingNodeVM:;
+ (BOOL)isHistoryTipsNodeVM:;
+ (BOOL)isFeedSummaryVideoCoverVM:;
+ (BOOL)isFeedSummaryVM:;
+ (BOOL)isFeedRSVM:;
+ (id)createTimestampNodeWithContext:timestamp:;
+ (id)createSkeletonNodeWithContext:;
+ (id)createHistoryTipsNodeWithContext:;
+ (id)createInputLoadingNodeWithContext:;
+ (id)createEntranceNodeWithContext:isAIGCHomePageOnboarding:isHasLocalHistoryStorage:;
+ (id)createFeedSummaryVMsNodeWithContext:rowDataDict:logData:;
+ (id)createFeedRSVMsNodeWithContext:rowDataDict:logData:;
+ (id)createBubbleNodeWithContext:dataModel:;
+ (id)createFeedSummaryVideoCoverNodeWithContext:dataModel:;
@end
