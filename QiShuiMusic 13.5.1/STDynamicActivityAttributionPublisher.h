@interface STDynamicActivityAttributionPublisher : NSObject
- (id)init;
- (void).cxx_destruct;
+ (void)setCurrentAttributionStringWithFormat:auditToken:;
+ (void)setCurrentAttributionWebsiteString:auditToken:;
+ (void)setCurrentAttributionKey:andApp:;
+ (void)setCurrentAttributionLocalizableKey:auditToken:;
@end
