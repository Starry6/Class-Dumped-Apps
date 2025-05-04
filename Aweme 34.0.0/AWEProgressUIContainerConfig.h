@interface AWEProgressUIContainerConfig : NSObject
@property (nonatomic) {UIEdgeInsets=dddd} edgeInsets;
@property (nonatomic) double height;
@property (nonatomic) AWEProgressUIColorConfig bgColorConifg;
- (id)bgColorConifg;
- (void)setBgColorConifg:;
- (void)setHeight:;
- (id)edgeInsets;
- (void)setEdgeInsets:;
- (void).cxx_destruct;
- (double)height;
+ (id)containerConfigWithEdgeInsets:height:bgColorConfig:;
@end
