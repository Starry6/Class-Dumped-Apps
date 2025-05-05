@interface BMDSLTransforms : NSObject
+ (id)arrayTuplesToDictionary:;
+ (id)durationForEventWithTimestamp:isStart:key:keyName:startEventsState:metadata:;
+ (id)firstEventOfDayWithEvent:timestamp:lastTimestampBuffer:dayStartOffset:;
+ (id)allowedTransforms;
+ (id)durationForEventWithTimestamp:isStart:key:startEventsState:;
+ (id)allowedClasses;
@end
