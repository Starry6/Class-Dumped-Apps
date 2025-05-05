@interface MPPlayableContentManagerContext : NSObject
@property (nonatomic) q enforcedContentItemsCount;
@property (nonatomic) q enforcedContentTreeDepth;
@property (nonatomic) BOOL contentLimitsEnforced;
@property (nonatomic) BOOL endpointAvailable;
@property (nonatomic) BOOL contentLimitsEnabled;
- (BOOL)contentLimitsEnabled;
- (long long)enforcedContentItemsCount;
- (void)setEnforcedContentItemsCount:;
- (long long)enforcedContentTreeDepth;
- (void)setEnforcedContentTreeDepth:;
- (BOOL)contentLimitsEnforced;
- (void)setContentLimitsEnforced:;
- (BOOL)endpointAvailable;
- (void)setEndpointAvailable:;
@end
