@interface AWEProfileVCLoadEventManager : NSObject
+ (id)profileCustomNetStageEventWithRequests:baseTime:;
+ (id)profileCustomDetailStageStatisWithTrace:;
+ (id)addCustomStageEventWithRequest:prefix:baseTime:;
+ (void)addCustomStageEventWithRequest:dict:prefix:baseTime:;
+ (id)profileImageStatisWithTrace:;
@end
