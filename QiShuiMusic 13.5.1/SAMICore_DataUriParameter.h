@interface SAMICore_DataUriParameter : NSObject
@property (nonatomic) q uriType;
@property (nonatomic) NSArray uris;
@property (nonatomic) NSString authPolicy;
@property (nonatomic) NSString authPolicyHeader;
- (long long)uriType;
- (id)authPolicy;
- (id)authPolicyHeader;
- (void)setAuthPolicy:;
- (void)setAuthPolicyHeader:;
- (void)setUriType:;
- (id)uris;
- (void)setUris:;
@end
