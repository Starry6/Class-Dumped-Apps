@interface PTYNetworkManager : NSObject
@property (nonatomic) <PTYNetworkProtocol> network;
- (id)init;
- (void)setNetwork:;
- (id)network;
- (void).cxx_destruct;
+ (void)cancelAllDownload;
+ (void)download:headers:destPath:callback:;
+ (void)get:headers:callback:;
+ (void)post:headers:body:callback:;
+ (void)request:method:headers:body:timeout:callback:;
+ (id)sharedManager;
@end
