@interface AWEIMPushElapsedTimeHelper : NSObject
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (BOOL)enableTraceShowingPushElapsedTime;
+ (id)sharedIntance;
+ (id)monitorWithEvent:context:;
+ (id)createMonitorWithEvent:;
+ (id)appendMonitorIntoElapsedTimeInfo:monitor:;
+ (BOOL)isValidInfo:;
+ (id)recordEndWholeElaspedTimeMonitorWithElapsedTimInfo:;
+ (id)generateFinalElaspedTimeInfo:;
+ (id)generateElapsedTimeInfoWithInsertingMessageContext:;
+ (id)appendMonitorIntoElapsedTimeInfo:monitors:;
@end
