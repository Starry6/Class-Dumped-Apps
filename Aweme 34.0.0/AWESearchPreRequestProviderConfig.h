@interface AWESearchPreRequestProviderConfig : NSObject
@property (nonatomic) NSDictionary providerMappingConfig;
@property (nonatomic) NSDictionary verticalProviderMappingConfig;
- (id)verticalProviderMapping;
- (id)providerMappingConfig;
- (void)setProviderMappingConfig:;
- (id)verticalProviderMappingConfig;
- (void)setVerticalProviderMappingConfig:;
- (void).cxx_destruct;
- (id)providerMapping;
+ (id)sharedInstanced;
@end
