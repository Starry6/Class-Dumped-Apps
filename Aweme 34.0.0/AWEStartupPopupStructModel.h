@interface AWEStartupPopupStructModel : AWEBaseApiModel
@property (nonatomic) AWEActivityStartupPopupModel universalPopup;
@property (nonatomic) Q showType;
@property (nonatomic) NSDictionary logExtra;
@property (nonatomic) AWEActivityStartupPopupFEModel fePopup;
@property (nonatomic) NSString bizType;
@property (nonatomic) double getDate;
- (void)setLogExtra:;
- (id)logExtra;
- (id)bizType;
- (void)setBizType:;
- (id)universalPopup;
- (void)setUniversalPopup:;
- (id)fePopup;
- (void)setFePopup:;
- (void)setGetDate:;
- (double)getDate;
- (void).cxx_destruct;
- (void)setShowType:;
- (unsigned long long)showType;
+ (id)JSONKeyPathsByPropertyKey;
@end
