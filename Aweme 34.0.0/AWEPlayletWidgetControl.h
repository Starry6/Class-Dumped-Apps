@interface AWEPlayletWidgetControl : NSObject
@property (nonatomic) NSString playletEnterFrom;
@property (nonatomic) BOOL isPlayletStream;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)enterFrom;
- (BOOL)shouldDesktopChannelGuideEvadeWithScene:enterFrom:;
- (void)checkWidgetInstalledWithCompletion:;
- (id)initWithEnterFrom:isPlayletStream:;
- (void)showWidgetViewPassAllFrequencyControl:;
- (void)refreshWidget;
- (void)initPlayletWidgetSettings;
- (void)setPlayletEnterFrom:;
- (void)setIsPlayletStream:;
- (void)savePlayletTabInfoForWidget;
- (id)playletEnterFrom;
- (BOOL)isPlayletStream;
- (id)position;
- (void).cxx_destruct;
- (id)sceneType;
- (id)tabID;
+ (void)showPlayletWidgetGuideWithEnterFrom:isPlayletStream:;
+ (id)sharedInstance;
@end
