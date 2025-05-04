@interface AWEWebPushGuideManager : NSObject
@property (nonatomic) NSString scene;
@property (nonatomic) BDXBridgeContext brideContext;
@property (nonatomic) BOOL needCallback;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (BOOL)needCallback;
- (void)setNeedCallback:;
- (void)showPitayaPushGuide:;
- (void)pushGuideShowFail:;
- (void)pushGuideShowSuccess:;
- (void)pushGuideDismiss:;
- (void)pushGuideActionCancel:;
- (void)pushGuideActionSettingsBack:isOpen:;
- (id)brideContext;
- (void)setBrideContext:;
- (void)setScene:;
- (id)scene;
- (void).cxx_destruct;
@end
