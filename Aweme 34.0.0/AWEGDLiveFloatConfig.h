@interface AWEGDLiveFloatConfig : NSObject
@property (nonatomic) NSNumber needShow;
@property (nonatomic) NSNumber silentDisplay;
@property (nonatomic) NSString roomID;
@property (nonatomic) NSString jumpSchema;
@property (nonatomic) NSString enterFrom;
@property (nonatomic) UIViewController onViewController;
@property (nonatomic) NSString liveFloatTag;
@property (nonatomic) @? defaultTapAction;
- (void)setEnterFrom:;
- (id)enterFrom;
- (id)jumpSchema;
- (void)setJumpSchema:;
- (id)needShow;
- (void)setOnViewController:;
- (id)onViewController;
- (void)setNeedShow:;
- (void)setLiveFloatTag:;
- (void)setSilentDisplay:;
- (id)silentDisplay;
- (id)liveFloatTag;
- (id)roomID;
- (id)initWithParams:;
- (void).cxx_destruct;
- (void)setRoomID:;
- (id)defaultTapAction;
- (void)setDefaultTapAction:;
@end
