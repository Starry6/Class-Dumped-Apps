@interface TITraceLogParser : NSObject
@property (nonatomic) Q version;
@property (nonatomic) <TITraceLogParsingDelegate> delegate;
- (void)setVersion:;
- (unsigned long long)version;
- (void)setDelegate:;
- (id)delegate;
- (void).cxx_destruct;
- (void)parseTraceLogContent:;
- (void)parseTraceLogHeaderWithScanner:;
- (BOOL)parseStringHeader:headerValue:withScanner:;
- (BOOL)parseIntegerHeader:headerValue:withScanner:;
- (void)parseTraceRecordsWithScanner:;
- (id)extractBeamSearchContextStringFromLogText:;
- (id)convertStringToContext:;
- (id)parseTraceLogContextFromLogText:andPriorContext:;
- (id)parseTraceRecordWithScanner:andPriorContext:;
@end
