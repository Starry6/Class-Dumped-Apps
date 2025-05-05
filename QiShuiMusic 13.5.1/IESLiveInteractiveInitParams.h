@interface IESLiveInteractiveInitParams : NSObject
@property (nonatomic) NSNumber roomID;
@property (nonatomic) NSArray supportedScenes;
@property (nonatomic) Q scene;
@property (nonatomic) BOOL isAuto;
@property (nonatomic) NSInteger uiLayout;
@property (nonatomic) Q initSource;
@property (nonatomic) BOOL passiveStart;
- (id)mapToDictionary;
- (id)supportedScenes;
- (unsigned long long)initSource;
- (BOOL)passiveStart;
- (void)setInitSource:;
- (void)setPassiveStart:;
- (void)setSupportedScenes:;
- (void)setUiLayout:;
- (void)setScene:;
- (unsigned long long)scene;
- (void).cxx_destruct;
- (id)roomID;
- (void)setRoomID:;
- (BOOL)isAuto;
- (void)setIsAuto:;
- (int)uiLayout;
@end
