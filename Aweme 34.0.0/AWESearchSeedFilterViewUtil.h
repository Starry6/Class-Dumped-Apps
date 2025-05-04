@interface AWESearchSeedFilterViewUtil : NSObject
@property (nonatomic) Q theme;
@property (nonatomic) AWESearchSeedFilterViewContConfiguration contConfiguration;
@property (nonatomic) AWESearchSeedFilterViewPosConfiguration posConfiguration;
- (id)contConfiguration;
- (id)posConfiguration;
- (void)setPosConfiguration:;
- (void)setContConfiguration:;
- (unsigned long long)theme;
- (void)setTheme:;
- (void).cxx_destruct;
+ (void)setViewBorder:color:border:type:length:;
@end
