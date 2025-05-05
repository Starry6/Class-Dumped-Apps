@interface HMDInvalidThreadsJSONParser : NSObject
- (id)parseInvalidThreadsJSONWithFile:;
- (id)parseInvalidThreadsJSONWithString:;
- (id)stackTraceWithTokens:atIndex:;
@end
