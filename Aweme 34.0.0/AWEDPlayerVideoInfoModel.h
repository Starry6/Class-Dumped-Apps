@interface AWEDPlayerVideoInfoModel : AWEBaseApiModel
@property (nonatomic) AWEURLModel playURL;
@property (nonatomic) AWEURLModel coverURL;
@property (nonatomic) NSNumber height;
@property (nonatomic) NSNumber width;
@property (nonatomic) NSString dashVideoModel;
@property (nonatomic) BOOL dashEnableDynamicRate;
- (id)dashVideoModel;
- (void)setDashVideoModel:;
- (BOOL)dashEnableDynamicRate;
- (void)setDashEnableDynamicRate:;
- (void)setHeight:;
- (void)setWidth:;
- (id)width;
- (void).cxx_destruct;
- (id)height;
- (id)playURL;
- (void)setPlayURL:;
- (id)coverURL;
- (void)setCoverURL:;
@end
