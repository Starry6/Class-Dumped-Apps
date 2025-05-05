@interface SAAssistantLoaded : SABaseClientBoundCommand
@property (nonatomic) NSString appleConnectSessionToken;
@property (nonatomic) NSString dataAnchor;
@property (nonatomic) NSNumber requestSync;
@property (nonatomic) NSArray syncAnchors;
@property (nonatomic) NSString version;
- (id)groupIdentifier;
- (void)setVersion:;
- (id)version;
- (BOOL)requiresResponse;
- (id)encodedClassName;
- (id)requestSync;
- (id)appleConnectSessionToken;
- (void)setAppleConnectSessionToken:;
- (id)dataAnchor;
- (void)setDataAnchor:;
- (void)setRequestSync:;
- (id)syncAnchors;
- (void)setSyncAnchors:;
+ (id)assistantLoaded;
+ (id)assistantLoadedWithDictionary:context:;
@end
