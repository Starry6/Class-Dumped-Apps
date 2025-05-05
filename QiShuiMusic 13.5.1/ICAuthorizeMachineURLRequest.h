@interface ICAuthorizeMachineURLRequest : ICStoreURLRequest
@property (nonatomic) NSString keybagPath;
@property (nonatomic) NSString reason;
@property (nonatomic) NSData tokenData;
- (id)reason;
- (void)setReason:;
- (void)setTokenData:;
- (void).cxx_destruct;
- (id)tokenData;
- (void)setKeybagPath:;
- (void)buildStoreURLRequestWithURLRequest:builderProperties:completionHandler:;
- (id)keybagPath;
@end
