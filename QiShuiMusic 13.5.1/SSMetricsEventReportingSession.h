@interface SSMetricsEventReportingSession : NSObject
- (BOOL)anyUnreportedEvents;
- (id)writeEventsToStream:uncompressedMaxSize:;
- (void)_writeString:toData:;
- (id)_unreportedEvents;
- (long long)_estimateSizeOfJsonObject:;
- (id)initWithReportingURL:insertTimestamp:suppressUserInfo:eventController:;
- (id)sessionCanaryIdentifier;
- (void).cxx_destruct;
- (id)initWithReportingURL:insertTimestamp:suppressDSID:eventController:;
- (id)initWithReportingURL:insertTimestamp:eventController:;
- (id)writeEventsToStream:;
- (BOOL)markEventsAsReported;
@end
