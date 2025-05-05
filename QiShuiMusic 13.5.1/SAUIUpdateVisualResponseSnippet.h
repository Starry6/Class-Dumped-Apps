@interface SAUIUpdateVisualResponseSnippet : SABaseClientBoundCommand
@property (nonatomic) NSData stateData;
@property (nonatomic) NSString viewId;
- (id)groupIdentifier;
- (BOOL)requiresResponse;
- (id)encodedClassName;
- (id)viewId;
- (void)setViewId:;
- (id)stateData;
- (void)setStateData:;
@end
