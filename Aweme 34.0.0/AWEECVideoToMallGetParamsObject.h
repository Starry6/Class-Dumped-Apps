@interface AWEECVideoToMallGetParamsObject : NSObject
@property (nonatomic) AWEECJumpToMallContextModel currentContext;
@property (nonatomic) AWEECJumpToMallContextModel nMinContext;
@property (nonatomic) AWELeftSlideNMinConfigModel nMinConfig;
@property (nonatomic) AWELeftSlidPredictConfigModel predictConfig;
@property (nonatomic) NSString implicitProduct;
@property (nonatomic) AWEECPredictInfoModel predictProductInfo;
@property (nonatomic) NSDictionary extraParams;
- (void)setExtraParams:;
- (id)extraParams;
- (id)predictConfig;
- (void)setPredictConfig:;
- (id)nMinConfig;
- (void)setNMinConfig:;
- (void)setImplicitProduct:;
- (void)setPredictProductInfo:;
- (void)setNMinContext:;
- (id)implicitProduct;
- (id)nMinContext;
- (id)predictProductInfo;
- (id)currentContext;
- (void)setCurrentContext:;
- (void).cxx_destruct;
@end
