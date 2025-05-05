@interface SASProximityAction : NSObject
- (BOOL)hasResponse;
- (id)responsePayload;
- (id)requestPayload;
- (void)setResponseFromData:;
+ (unsigned long long)actionID;
+ (id)actionFromDictionary:;
@end
