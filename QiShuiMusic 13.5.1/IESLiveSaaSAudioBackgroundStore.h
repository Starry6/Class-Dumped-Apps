@interface IESLiveSaaSAudioBackgroundStore : NSObject
@property (nonatomic) UIImage backgroundImage;
@property (nonatomic) NSString toastString;
@property (nonatomic) BOOL shouldUpdateAvator;
@property (nonatomic) IESLiveSaaSLiveRoomModel roomModel;
@property (nonatomic) HTSEventContext trackContext;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)setToastString:;
- (void)checkAudioBackgroundImage;
- (void)didSetAttachingDIContext;
- (void)didUpdateRoom:;
- (id)initWithRoomModel:;
- (void)loadImageWith:;
- (id)roomModel;
- (void)setRoomModel:;
- (void)setShouldUpdateAvator:;
- (void)setTrackContext:;
- (BOOL)shouldUpdateAvator;
- (id)toastString;
- (id)trackContext;
- (void)setBackgroundImage:;
- (id)backgroundImage;
- (void)setup;
- (void).cxx_destruct;
- (void)messageReceived:;
@end
