@interface AWENearbyLynxConfig : NSObject
@property (nonatomic) q widthMode;
@property (nonatomic) q heightMode;
@property (nonatomic) BOOL isHeightFitAndWidthFixed;
@property (nonatomic) BOOL isEnableiPadConfig;
@property (nonatomic) NSNumber iPadRadio;
@property (nonatomic) NSString containerBgColor;
@property (nonatomic) Q loadStrategy;
- (void)setWidthMode:;
- (void)setHeightMode:;
- (void)setContainerBgColor:;
- (id)containerBgColor;
- (long long)widthMode;
- (long long)heightMode;
- (unsigned long long)loadStrategy;
- (void)setIsHeightFitAndWidthFixed:;
- (BOOL)isEnableiPadConfig;
- (id)iPadRadio;
- (BOOL)isHeightFitAndWidthFixed;
- (void)setLoadStrategy:;
- (void)setIsEnableiPadConfig:;
- (void)setIPadRadio:;
- (void).cxx_destruct;
@end
