@interface TLAlertTone : NSObject
@property (nonatomic) NSURL soundFileURL;
@property (nonatomic) TLSystemSound actualSound;
@property (nonatomic) TLSystemSound previewSound;
@property (nonatomic) BOOL requiresLongFormPlayback;
- (BOOL)requiresLongFormPlayback;
- (id)soundFileURL;
- (void).cxx_destruct;
- (id)actualSound;
- (id)initWithSoundFileURL:actualSoundID:previewSoundID:requiresLongFormPlayback:;
- (id)previewSound;
@end
