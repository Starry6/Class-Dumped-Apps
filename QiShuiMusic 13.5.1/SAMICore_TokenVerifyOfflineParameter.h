@interface SAMICore_TokenVerifyOfflineParameter : NSObject
@property (nonatomic) NSString appKey;
@property (nonatomic) NSString token;
@property (nonatomic) NSString extra;
- (id)appKey;
- (void)setAppKey:;
- (void)setExtra:;
- (id)extra;
- (id)token;
- (void)setToken:;
@end
