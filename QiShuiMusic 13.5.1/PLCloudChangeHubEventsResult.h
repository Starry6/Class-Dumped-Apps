@interface PLCloudChangeHubEventsResult : NSObject
@property (nonatomic) q resultType;
@property (nonatomic) Q changeHubEventIndex;
@property (nonatomic) NSString currentTokenDescription;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)initWithUnsuccessfulResultType:;
- (long long)resultType;
- (void)enumerateLocalEventsWithBlock:;
- (void).cxx_destruct;
- (id)currentTokenDescription;
- (id)initWithSuccesfulEvents:changeHubEventIndex:;
- (id)initWithResultType:events:changeHubEventIndex:;
- (id)localEventFromEvent:;
- (unsigned long long)changeHubEventIndex;
@end
