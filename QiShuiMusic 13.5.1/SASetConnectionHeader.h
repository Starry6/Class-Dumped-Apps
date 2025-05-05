@interface SASetConnectionHeader : SABaseClientBoundCommand
@property (nonatomic) NSString aceHostHeader;
@property (nonatomic) SAConnectionPolicy connectionPolicy;
@property (nonatomic) BOOL reconnectNow;
- (id)groupIdentifier;
- (id)connectionPolicy;
- (BOOL)requiresResponse;
- (id)encodedClassName;
- (void)setConnectionPolicy:;
- (id)aceHostHeader;
- (void)setAceHostHeader:;
- (BOOL)reconnectNow;
- (void)setReconnectNow:;
+ (id)setConnectionHeader;
+ (id)setConnectionHeaderWithDictionary:context:;
@end
