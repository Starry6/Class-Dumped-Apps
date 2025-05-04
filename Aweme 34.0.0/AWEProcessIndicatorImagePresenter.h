@interface AWEProcessIndicatorImagePresenter : NSObject
@property (nonatomic) AWEPageContext<AWEProgressContextProtocol> context;
@property (nonatomic) AWEProgressUIConfig config;
@property (nonatomic) Q currentStatus;
@property (nonatomic) AWEProgressIndicatorUIConfig indicatorUIConfig;
@property (nonatomic) double currentPercentage;
@property (nonatomic) AWEProcessIndicatorImageView indicatorView;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)progressValueChangedTo:animated:;
- (void)configIndicatorView;
- (void)setCurrentPercentage:;
- (id)indicatorUIConfig;
- (id)formatedStringWithDuration:shouldShowHours:;
- (void)changeProgressStatusTo:withAction:animate:;
- (id)initWithTargeView:UIConfig:context:;
- (void)setIndicatorUIConfig:;
- (void)setCurrentStatus:;
- (void)setConfig:;
- (unsigned long long)currentStatus;
- (id)config;
- (void)setContext:;
- (void).cxx_destruct;
- (id)context;
- (id)indicatorView;
- (double)currentPercentage;
@end
