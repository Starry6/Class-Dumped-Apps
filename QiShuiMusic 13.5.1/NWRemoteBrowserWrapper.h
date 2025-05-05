@interface NWRemoteBrowserWrapper : NSObject
@property (nonatomic) NSUUID clientID;
@property (nonatomic) NWBrowser browser;
- (void)setBrowser:;
- (void)setClientID:;
- (void).cxx_destruct;
- (id)browser;
- (id)clientID;
@end
