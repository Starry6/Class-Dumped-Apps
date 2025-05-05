@interface SASetClientData : SABaseClientBoundCommand
@property (nonatomic) NSNumber holdToTalkThresholdInMilliseconds;
- (id)groupIdentifier;
- (id)holdToTalkThresholdInMilliseconds;
- (void)setHoldToTalkThresholdInMilliseconds:;
- (BOOL)requiresResponse;
- (id)encodedClassName;
+ (id)setClientData;
+ (id)setClientDataWithDictionary:context:;
@end
