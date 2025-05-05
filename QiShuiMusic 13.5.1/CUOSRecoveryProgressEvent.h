@interface CUOSRecoveryProgressEvent : NSObject
@property (nonatomic) NSString authenticationText;
@property (nonatomic) NSError error;
@property (nonatomic) NSInteger type;
@property (nonatomic) NSDictionary configInfo;
- (void)setError:;
- (void)setType:;
- (id)error;
- (int)type;
- (void).cxx_destruct;
- (id)authenticationText;
- (void)setAuthenticationText:;
- (id)configInfo;
@end
