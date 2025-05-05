@interface AVSecondScreenContentViewConnection : AVSecondScreenConnection
@property (nonatomic) AVDisplayCriteria preferredDisplayCriteria;
@property (nonatomic) BOOL readyToConnect;
@property (nonatomic) AVPlayer player;
@property (nonatomic) BOOL playing;
@property (nonatomic) BOOL requiresTVOutScreen;
- (id)initWithContentView:;
- (void)dealloc;
- (void)_updateReadyToConnect;
- (void)enablePlayerDebugInformation:;
- (void)startUpdates;
@end
