@interface AWEEnterpriseIMLynxContainerViewModel : AWEEnterpriseIMMessageCardBaseViewModel
@property (nonatomic) NSString sourceUrl;
@property (nonatomic) NSDictionary lynxInitialProperties;
@property (nonatomic) double lynxWidth;
@property (nonatomic) double lynxHeight;
@property (nonatomic) BOOL useBullet;
@property (nonatomic) BOOL ignoreLynxSizeCallBack;
- (BOOL)useBullet;
- (void)setUseBullet:;
- (void)configDataWithContent:ext:localExt:;
- (BOOL)isVaildViewModel;
- (id)lynxInitialProperties;
- (BOOL)ignoreLynxSizeCallBack;
- (double)lynxWidth;
- (double)lynxHeight;
- (void)setLynxInitialProperties:;
- (void)setIgnoreLynxSizeCallBack:;
- (void)setLynxWidth:;
- (void)setLynxHeight:;
- (void)p_configDefaultData;
- (void).cxx_destruct;
- (void)setSourceUrl:;
- (id)sourceUrl;
@end
