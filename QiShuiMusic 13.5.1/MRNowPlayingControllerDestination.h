@interface MRNowPlayingControllerDestination : MRDestination
@property (nonatomic) MRPlayerPath unresolvedPlayerPath;
@property (nonatomic) MRPlayerPath resolvedPlayerPath;
@property (nonatomic) BOOL isEndpointSet;
- (void)setEndpoint:;
- (BOOL)isEndpointSet;
- (id)unresolvedPlayerPath;
- (void)setResolvedPlayerPath:;
- (id)resolvedPlayerPath;
- (void).cxx_destruct;
- (id)description;
- (void)setIsEndpointSet:;
- (void)setUnresolvedPlayerPath:;
- (id)initWithConfiguration:;
- (id)copyWithZone:;
@end
