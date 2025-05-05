@interface APayAuthInfo : NSObject
@property (nonatomic) NSString appID;
@property (nonatomic) NSString pid;
@property (nonatomic) NSString redirectUri;
- (void)setRedirectUri:;
- (id)initWithAppID:pid:redirectUri:;
- (id)redirectUri;
- (id)wapDescription;
- (void)setAppID:;
- (id)pid;
- (id)appID;
- (void).cxx_destruct;
- (id)description;
- (void)setPid:;
@end
