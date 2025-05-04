@interface AWESearchSubcribeAlertConfiguration : NSObject
@property (nonatomic) NSString tipsTitle;
@property (nonatomic) NSString tipsDesc;
@property (nonatomic) BOOL needInputPhone;
@property (nonatomic) NSString inputTitle;
@property (nonatomic) NSString inputDesc;
@property (nonatomic) NSDictionary logParams;
@property (nonatomic) @? dismissBack;
- (id)logParams;
- (void)setLogParams:;
- (void)setTipsTitle:;
- (void)setTipsDesc:;
- (void)setInputTitle:;
- (void)setInputDesc:;
- (void)setNeedInputPhone:;
- (void)setDismissBack:;
- (id)tipsTitle;
- (id)tipsDesc;
- (BOOL)needInputPhone;
- (id)inputTitle;
- (id)inputDesc;
- (id)dismissBack;
- (void).cxx_destruct;
@end
