@interface AWERTVVoipFeedbackPageManager : NSObject
@property (nonatomic) <RxInjector> injector;
@property (nonatomic) <RTVVoipSettingManagerInterface> settingManager;
@property (nonatomic) <RTVVoipStorageAreaInterface> storage;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)rxAwakeFromPropertyInjection;
- (void)showFeedbackPageIfNeededWithVoip:;
- (id)__feedbackSettings;
- (BOOL)__shouldShowFeedbackWithVoip:;
- (long long)__randomIntegerBetweenMin:andMax:;
- (void)__showFeedbackPage:;
- (id)storage;
- (id)injector;
- (void).cxx_destruct;
- (id)settingManager;
@end
