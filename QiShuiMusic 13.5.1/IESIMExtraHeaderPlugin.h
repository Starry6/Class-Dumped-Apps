@interface IESIMExtraHeaderPlugin : NSObject
@property (nonatomic) NSString versionCode;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)extraHeaderForWebsocketRequest:;
- (id)extraHeaderForHTTPRequest:;
- (id)getMCCMNC;
- (id)init;
- (void).cxx_destruct;
- (id)loginManager;
- (id)versionCode;
- (void)setVersionCode:;
+ (id)sharedInstance;
@end
