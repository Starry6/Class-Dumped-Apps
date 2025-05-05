@interface IESSaaSTIMEventLogger : NSObject
@property (nonatomic) IESSaaSTIMThreadSafeMutableDictionary timedEvents;
- (void)setTimedEvents:;
- (void)endTimedEventForStartMarker:withService:name:data:;
- (void)endTimedEventForStartMarker:withService:name:dataConfigBlock:;
- (void)logService:name:data:;
- (void)startTimedEventWithMarker:startInfo:;
- (id)startTimedEventWithStartInfo:;
- (id)timedEvents;
- (id)init;
- (void).cxx_destruct;
+ (id)sharedInstance;
@end
