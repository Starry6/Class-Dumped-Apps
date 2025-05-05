@interface DSP_HALMock_IOProcessor : NSObject
@property (nonatomic) ^v dspCallbacks;
@property (nonatomic) <HAL_DSP_HostCallbacks> hostCallbacks;
@property (nonatomic) NSInteger featureFlag;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)init;
- (void)dealloc;
- (void).cxx_destruct;
- (int)featureFlag;
- (void)setFeatureFlag:;
- (id)retrieveFormats:error:;
- (id)negotiateConfigurationChange:error:;
- (id)adaptToConfigurationChange:withCallbacks:error:;
- (id)getCustomPropertyList;
- (BOOL)hasCustomProperty:;
- (BOOL)setCustomProperty:withData:error:;
- (id)getCustomProperty:;
- (id)conference_negotiateConfigurationChange:error:;
- (id)basic_negotiateConfigurationChange:error:;
- (id)dspCallbacks;
- (void)setDspCallbacks:;
- (id)hostCallbacks;
- (void)setHostCallbacks:;
@end
