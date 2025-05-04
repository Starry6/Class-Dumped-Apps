@interface AWELastThirdLoginViewFactoryConfig : NSObject
@property (nonatomic) NSString loginTitle;
@property (nonatomic) AWEUserContext context;
@property (nonatomic) DYLastLoginUserModel model;
@property (nonatomic) q protocolOffset;
- (id)loginTitle;
- (long long)protocolOffset;
- (void)setLoginTitle:;
- (void)setProtocolOffset:;
- (void)setModel:;
- (id)model;
- (void)setContext:;
- (void).cxx_destruct;
- (id)context;
@end
