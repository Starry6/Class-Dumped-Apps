@interface AWELivePreStreamLiveVSRoomElement : AWELiveBaseElement
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)initializeElement;
- (BOOL)shouldActivateElementWithData:;
- (void)streamPlayer_firstFrame;
- (void)preloadElement;
- (void)onMessageReceivce:withDict:;
- (void)iesLiveTrackEvent:params:;
- (void)configureMessage;
- (void)trackerContentPlay;
- (void)setData:;
- (void)reset;
@end
