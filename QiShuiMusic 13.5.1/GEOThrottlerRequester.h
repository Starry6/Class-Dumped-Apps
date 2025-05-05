@interface GEOThrottlerRequester : NSObject
- (id)getTokenOrInfoFor:nextSafeRequestTime:availableRequestCount:error:;
- (BOOL)_getTokenAndInfo:forRequest:nextSafeRequestTime:availableRequestCount:error:;
- (BOOL)allowRequest:forClient:throttlerToken:error:;
- (BOOL)getThrottleStateFor:nextSafeRequestTime:availableRequestCount:error:;
+ (id)sharedRequester;
@end
