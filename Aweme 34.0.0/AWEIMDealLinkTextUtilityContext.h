@interface AWEIMDealLinkTextUtilityContext : NSObject
@property (nonatomic) AWEIMTextTemplateModel templateModel;
@property (nonatomic) AWEIMMessage message;
@property (nonatomic) UIView view;
@property (nonatomic) q style;
@property (nonatomic) NSString btmToken;
@property (nonatomic) q urlUIType;
- (void)setBtmToken:;
- (void)setUrlUIType:;
- (long long)urlUIType;
- (id)btmToken;
- (id)message;
- (id)view;
- (void)setView:;
- (long long)style;
- (void).cxx_destruct;
- (void)setMessage:;
- (void)setStyle:;
- (void)setTemplateModel:;
- (id)templateModel;
@end
