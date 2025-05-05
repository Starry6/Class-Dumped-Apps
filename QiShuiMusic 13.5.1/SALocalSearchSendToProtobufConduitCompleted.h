@interface SALocalSearchSendToProtobufConduitCompleted : SABaseCommand
@property (nonatomic) NSData rawResponse;
@property (nonatomic) NSString aceId;
@property (nonatomic) NSString refId;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)groupIdentifier;
- (BOOL)requiresResponse;
- (id)rawResponse;
- (id)encodedClassName;
- (void)setRawResponse:;
+ (id)sendToProtobufConduitCompleted;
+ (id)sendToProtobufConduitCompletedWithDictionary:context:;
@end
