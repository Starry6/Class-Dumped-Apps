@interface BWInferenceRequirement : NSObject
@property (nonatomic) <BWInferenceProvider> provider;
@property (nonatomic) BWInferenceConfiguration configuration;
- (void)dealloc;
- (id)provider;
- (id)configuration;
- (id)initWithProvider:configuration:;
@end
