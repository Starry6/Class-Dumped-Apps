@interface WXStateJumpMiniProgramInfo : WXStateJumpInfo
@property (nonatomic) NSString username;
@property (nonatomic) NSString path;
@property (nonatomic) Q miniProgramType;
- (unsigned long long)miniProgramType;
- (void)setMiniProgramType:;
- (id)path;
- (id)username;
- (void)setPath:;
- (void)setUsername:;
- (void).cxx_destruct;
@end
