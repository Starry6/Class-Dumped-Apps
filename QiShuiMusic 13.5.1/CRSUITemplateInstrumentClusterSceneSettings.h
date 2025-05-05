@interface CRSUITemplateInstrumentClusterSceneSettings : CRSUIInstrumentClusterSceneSettings
@property (nonatomic) NSString proxiedApplicationBundleIdentifier;
@property (nonatomic) NSObject<OS_xpc_object> templateEndpoint;
@property (nonatomic) Q itemType;
@property (nonatomic) Q layoutJustification;
@property (nonatomic) Q showsCompass;
@property (nonatomic) Q showsSpeedLimit;
@property (nonatomic) Q showsETA;
@property (nonatomic) q mapStyle;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)description;
- (id)mutableCopyWithZone:;
- (id)proxiedApplicationBundleIdentifier;
- (id)templateEndpoint;
@end
