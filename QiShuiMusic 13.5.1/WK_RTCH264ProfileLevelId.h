@interface WK_RTCH264ProfileLevelId : NSObject
@property (nonatomic) Q profile;
@property (nonatomic) Q level;
@property (nonatomic) NSString hexString;
- (void)setLevel:;
- (id)hexString;
- (id)initWithHexString:;
- (unsigned long long)level;
- (void)setProfile:;
- (unsigned long long)profile;
- (void).cxx_destruct;
- (id)initWithProfile:level:;
- (void)setHexString:;
@end
