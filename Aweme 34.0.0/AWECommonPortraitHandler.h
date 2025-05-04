@interface AWECommonPortraitHandler : NSObject
@property (nonatomic) IESPortraitConfig portraitConfig;
@property (nonatomic) @? portraitGetter;
- (id)portraitGetter;
- (id)initWithPortraitGetter:config:;
- (id)portraitConfig;
- (id)getPortrait;
- (void)setPortraitGetter:;
- (void)setPortraitConfig:;
- (void).cxx_destruct;
@end
