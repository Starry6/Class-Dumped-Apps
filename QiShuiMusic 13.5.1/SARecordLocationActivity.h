@interface SARecordLocationActivity : SABaseClientBoundCommand
@property (nonatomic) SALocation location;
@property (nonatomic) NSString sourceType;
- (id)groupIdentifier;
- (id)sourceType;
- (void)setSourceType:;
- (BOOL)requiresResponse;
- (id)location;
- (id)encodedClassName;
- (void)setLocation:;
@end
