@interface SAUIPaginateList : SABaseClientBoundCommand
@property (nonatomic) BOOL forward;
- (id)groupIdentifier;
- (BOOL)requiresResponse;
- (BOOL)forward;
- (id)encodedClassName;
- (void)setForward:;
@end
