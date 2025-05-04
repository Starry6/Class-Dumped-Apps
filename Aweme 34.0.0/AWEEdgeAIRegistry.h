@interface AWEEdgeAIRegistry : NSObject
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)onEvent:params:;
- (id)deviceId;
- (id)userId;
- (id)appVersion;
- (id)config;
- (id)baseUrl;
- (id)appName;
- (id)aid;
@end
