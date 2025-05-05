@interface CRSUIMutableTemplateDashboardWidgetSceneSettings : CRSUIMutableDashboardWidgetSceneSettings
@property (nonatomic) NSObject<OS_xpc_object> templateEndpoint;
@property (nonatomic) NSString proxiedApplicationBundleIdentifier;
@property (nonatomic) Q widgetStyle;
@property (nonatomic) NSObject<OS_xpc_object> endpoint;
@property (nonatomic) q mapStyle;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)copyWithZone:;
- (id)proxiedApplicationBundleIdentifier;
- (id)templateEndpoint;
- (void)setProxiedApplicationBundleIdentifier:;
- (void)setTemplateEndpoint:;
@end
