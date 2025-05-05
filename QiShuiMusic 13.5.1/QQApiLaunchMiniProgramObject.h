@interface QQApiLaunchMiniProgramObject : QQApiObject
@property (nonatomic) NSString miniAppID;
@property (nonatomic) NSString miniPath;
@property (nonatomic) Q miniprogramType;
- (unsigned long long)miniprogramType;
- (id)miniAppID;
- (id)miniPath;
- (void)setMiniAppID:;
- (void)setMiniPath:;
- (void)setMiniprogramType:;
- (id)init;
@end
