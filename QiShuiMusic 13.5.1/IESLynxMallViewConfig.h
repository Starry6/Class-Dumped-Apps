@interface IESLynxMallViewConfig : NSObject
@property (nonatomic) BOOL hideLoading;
@property (nonatomic) BOOL hideErrorView;
@property (nonatomic) NSString defaultMallTempURL;
@property (nonatomic) q platform;
@property (nonatomic) NSDictionary customInitData;
- (void)setHideLoading:;
- (id)customInitData;
- (id)defaultMallTempURL;
- (BOOL)hideErrorView;
- (BOOL)hideLoading;
- (void)setCustomInitData:;
- (void)setDefaultMallTempURL:;
- (void)setHideErrorView:;
- (void)setPlatform:;
- (long long)platform;
- (void).cxx_destruct;
@end
