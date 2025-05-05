@interface AVVolumeHUDAssertion : NSObject
@property (nonatomic) <AVVolumeHUDAssertionDelegate> delegate;
@property (nonatomic) NSString clientIdentifier;
@property (nonatomic) NSString sceneIdentifier;
@property (nonatomic) BOOL prefersSystemVolumeHUDHidden;
@property (nonatomic) UIWindowScene windowSceneForVolumeDisplay;
@property (nonatomic) BOOL onScreenForVolumeDisplay;
@property (nonatomic) NSString volumeAudioCategory;
@property (nonatomic) BOOL onScreen;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (BOOL)isOnScreenForVolumeDisplay;
- (void)setDelegate:;
- (id)sceneIdentifier;
- (id)windowSceneForVolumeDisplay;
- (id)volumeAudioCategory;
- (unsigned long long)hash;
- (void)setPrefersSystemVolumeHUDHidden:;
- (id)delegate;
- (void).cxx_destruct;
- (BOOL)prefersSystemVolumeHUDHidden;
- (id)clientIdentifier;
- (BOOL)isEqual:;
- (id)initWithSceneIdentifier:clientIdentifier:;
- (id)_systemController;
@end
