@interface SABackgroundUpdateRequest : SAStartRequest
@property (nonatomic) <SAAceSerializable> attachment;
- (id)groupIdentifier;
- (BOOL)requiresResponse;
- (id)encodedClassName;
- (id)attachment;
- (void)setAttachment:;
+ (id)backgroundUpdateRequest;
+ (id)backgroundUpdateRequestWithDictionary:context:;
@end
