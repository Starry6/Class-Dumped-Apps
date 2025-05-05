@interface BDXWebKit : NSObject
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)createViewWithFrame:params:url:;
- (void)configForestRequestParamsBuilderWithWebView:params:;
- (void)configSccWithWebView:params:;
- (id)configURLWithParams:url:;
- (void)configureViewWithView:frame:params:url:;
- (void)trackLifeCycleEvent:timeStamp:withParam:;
- (void)trackLifeCycleEvent:withParam:;
- (id)webViewSettingsWithParam:url:;
+ (id)serviceBizID;
+ (unsigned long long)serviceScope;
+ (unsigned long long)serviceType;
@end
