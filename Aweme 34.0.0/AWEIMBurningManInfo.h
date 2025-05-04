@interface AWEIMBurningManInfo : NSObject
@property (nonatomic) BOOL status;
@property (nonatomic) NSString avatarURLStr;
@property (nonatomic) NSString name;
@property (nonatomic) q level;
@property (nonatomic) q sparkNum;
- (id)avatarURLStr;
- (void)setAvatarURLStr:;
- (void)setSparkNum:;
- (long long)sparkNum;
- (void)setLevel:;
- (void)setStatus:;
- (long long)level;
- (void).cxx_destruct;
- (BOOL)status;
- (void)setName:;
- (id)name;
@end
