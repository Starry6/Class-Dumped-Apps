@interface AWEPOIDetailAutoModalUtil : NSObject
@property (nonatomic) double clickTime;
@property (nonatomic) NSString enterFrom;
@property (nonatomic) NSString enterMethod;
- (void)setEnterFrom:;
- (void)setEnterMethod:;
- (id)enterMethod;
- (id)enterFrom;
- (void)setClickTime:;
- (double)clickTime;
- (void)goodsDetailStartBuild;
- (void)poiClickBuild:enterMethod:;
- (BOOL)openGoodsStraightAway;
- (void).cxx_destruct;
+ (void)showIronManModalViewWithUrl:routerParams:constData:;
+ (void)showGrouponModalViewWithUrl:cityCode:sameCity:constData:;
+ (void)mergePublishParams:toDict:;
+ (id)configParamsWithUrl:sameCity:constData:;
+ (id)sharedInstance;
@end
