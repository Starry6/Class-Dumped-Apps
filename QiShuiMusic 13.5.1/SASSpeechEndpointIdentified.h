@interface SASSpeechEndpointIdentified : SABaseCommand
@property (nonatomic) NSNumber endpointTimestamp;
@property (nonatomic) NSString aceId;
@property (nonatomic) NSString refId;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)groupIdentifier;
- (BOOL)requiresResponse;
- (id)encodedClassName;
- (id)endpointTimestamp;
- (void)setEndpointTimestamp:;
+ (id)speechEndpointIdentified;
+ (id)speechEndpointIdentifiedWithDictionary:context:;
@end
