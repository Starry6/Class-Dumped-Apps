@interface MLInternalSettings : NSObject
@property (nonatomic) BOOL restrictNeuralNetworksToUseCPUOnly;
@property (nonatomic) BOOL restrictNeuralNetworksFromUsingANE;
@property (nonatomic) BOOL isNeuralNetworkGPUPathForbidden;
- (id)init;
- (void)setRestrictNeuralNetworksToUseCPUOnly:;
- (BOOL)isNeuralNetworkGPUPathForbidden;
- (id)initWithCoder:;
- (void)encodeWithCoder:;
- (BOOL)restrictNeuralNetworksFromUsingANE;
- (BOOL)restrictNeuralNetworksToUseCPUOnly;
- (void)setRestrictNeuralNetworksFromUsingANE:;
+ (BOOL)supportsSecureCoding;
+ (BOOL)deviceHasANE;
+ (id)globalSettings;
+ (id)globalSettingsFromSettings:;
@end
