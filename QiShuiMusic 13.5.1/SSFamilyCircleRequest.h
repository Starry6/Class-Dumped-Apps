@interface SSFamilyCircleRequest : SSRequest
@property (nonatomic) q authenticationPromptStyle;
@property (nonatomic) BOOL fetchITunesAccountNames;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)initWithXPCEncoding:;
- (id)copyXPCEncoding;
- (void)startWithCompletionBlock:;
- (long long)authenticationPromptStyle;
- (void)setAuthenticationPromptStyle:;
- (void)startWithResponseBlock:;
- (BOOL)fetchITunesAccountNames;
- (void)setFetchITunesAccountNames:;
@end
