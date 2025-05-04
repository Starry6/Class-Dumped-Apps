@interface AWEUserSendCodeModel : NSObject
@property (nonatomic) q sendScene;
@property (nonatomic) NSString codeAddress;
@property (nonatomic) q sendType;
- (long long)sendType;
- (void)setSendType:;
- (id)codeAddress;
- (void)setCodeAddress:;
- (long long)sendScene;
- (id)initWithSendScene:sendType:codeAddress:;
- (void)setSendScene:;
- (void).cxx_destruct;
@end
