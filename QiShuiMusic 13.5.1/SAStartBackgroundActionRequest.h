@interface SAStartBackgroundActionRequest : SABaseCommand
@property (nonatomic) NSString backgroundAction;
@property (nonatomic) <SAAceSerializable> backgroundActionPayload;
@property (nonatomic) NSString aceId;
@property (nonatomic) NSString refId;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)groupIdentifier;
- (BOOL)requiresResponse;
- (id)encodedClassName;
- (id)backgroundAction;
- (void)setBackgroundAction:;
- (id)backgroundActionPayload;
- (void)setBackgroundActionPayload:;
+ (id)startBackgroundActionRequest;
+ (id)startBackgroundActionRequestWithDictionary:context:;
@end
