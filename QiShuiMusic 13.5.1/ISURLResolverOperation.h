@interface ISURLResolverOperation : ISOperation
@property (nonatomic) NSURL URL;
@property (nonatomic) NSArray resolvedAddresses;
@property (nonatomic) NSArray resolvedAddressStrings;
- (id)url;
- (void)dealloc;
- (id)initWithURL:;
- (void)setUrl:;
- (void)run;
- (void).cxx_destruct;
- (void)setURL:;
- (id)URL;
- (id)resolvedAddresses;
- (id)resolvedAddressStrings;
- (void)_resolutionCompletedWithError:;
- (void)_runLookupForHostname:;
@end
