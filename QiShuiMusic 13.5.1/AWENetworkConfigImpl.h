@interface AWENetworkConfigImpl : HTSService
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)checkAntiSpamStateWithError:urlString:completion:;
- (BOOL)inOneLoop;
- (double)defaultTimeoutInterval;
@end
