@interface SARequestCompleted : SABaseClientBoundCommand
@property (nonatomic) NSString turnId;
- (id)groupIdentifier;
- (BOOL)requiresResponse;
- (id)encodedClassName;
- (id)turnId;
- (void)setTurnId:;
+ (id)requestCompleted;
+ (id)requestCompletedWithDictionary:context:;
@end
