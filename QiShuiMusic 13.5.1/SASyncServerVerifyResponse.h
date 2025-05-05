@interface SASyncServerVerifyResponse : SABaseClientBoundCommand
@property (nonatomic) NSArray internalVerifications;
@property (nonatomic) NSArray serverChecksums;
@property (nonatomic) NSArray syncDebugInfo;
- (id)groupIdentifier;
- (BOOL)requiresResponse;
- (id)encodedClassName;
- (id)internalVerifications;
- (void)setInternalVerifications:;
- (id)serverChecksums;
- (void)setServerChecksums:;
- (id)syncDebugInfo;
- (void)setSyncDebugInfo:;
+ (id)serverVerifyResponse;
+ (id)serverVerifyResponseWithDictionary:context:;
@end
