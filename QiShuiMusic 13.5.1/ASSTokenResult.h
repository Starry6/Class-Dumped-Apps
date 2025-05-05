@interface ASSTokenResult : NSObject
@property (nonatomic) NSString umidToken;
@property (nonatomic) NSString vkeyidToken;
@property (nonatomic) NSString vkeyid;
@property (nonatomic) NSString clientKey;
- (void)setVkeyidToken:;
- (void)setUmidToken:;
- (void)setVkeyid:;
- (id)umidToken;
- (id)vkeyid;
- (id)vkeyidToken;
- (id)clientKey;
- (void).cxx_destruct;
- (void)setClientKey:;
@end
