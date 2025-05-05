@interface WKProcessGroup : NSObject
@property (nonatomic) ^{OpaqueWKContext=} _contextRef;
@property (nonatomic) WKGeolocationProviderIOS _geolocationProvider;
@property (nonatomic) <WKProcessGroupDelegate> delegate;
- (id)init;
- (void)setDelegate:;
- (id)_geolocationProvider;
- (id)delegate;
- (void).cxx_destruct;
- (id).cxx_construct;
- (id)initWithInjectedBundleURL:;
- (id)initWithInjectedBundleURL:andCustomClassesForParameterCoder:;
- (id)_contextRef;
@end
