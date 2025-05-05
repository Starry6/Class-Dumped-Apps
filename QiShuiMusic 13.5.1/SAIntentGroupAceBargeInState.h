@interface SAIntentGroupAceBargeInState : AceObject
@property (nonatomic) NSArray bargeInModes;
@property (nonatomic) NSNumber durationSincePreviousTTSFinish;
@property (nonatomic) NSNumber durationSincePreviousTTSStart;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)groupIdentifier;
- (id)encodedClassName;
- (id)bargeInModes;
- (void)setBargeInModes:;
- (id)durationSincePreviousTTSFinish;
- (void)setDurationSincePreviousTTSFinish:;
- (id)durationSincePreviousTTSStart;
- (void)setDurationSincePreviousTTSStart:;
@end
