@interface AWEProgressFakeViewStatusUIConfig : NSObject
@property (nonatomic) AWEProgressFakeViewUIConfig fakeViewDefaultUIConfig;
@property (nonatomic) AWEProgressFakeViewUIConfig fakeViewActiveUIConfig;
- (id)fakeViewDefaultUIConfig;
- (id)fakeViewActiveUIConfig;
- (void)setFakeViewDefaultUIConfig:;
- (void)setFakeViewActiveUIConfig:;
- (void).cxx_destruct;
+ (id)fakeViewStatusConfig:activeUIConfig:;
@end
