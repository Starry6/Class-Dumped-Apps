@interface RPSystemBroadcastPickerView : UIView
@property (nonatomic) UIButton broadcastPickerButton;
@property (nonatomic) NSString preferredExtension;
@property (nonatomic) BOOL showsMicrophoneButton;
- (id)init;
- (id)tm_hook_screen_recorder_init;
- (id)tspk_screen_recorder_init;
- (id)initWithCoder:;
- (id)preferredExtension;
- (id)initWithFrame:;
- (void).cxx_destruct;
- (void)buttonPressed:;
- (void)screenCaptureChanged;
- (void)addBroadcastPickerButton;
- (void)setPreferredExtension:;
- (BOOL)showsMicrophoneButton;
- (void)setShowsMicrophoneButton:;
- (id)broadcastPickerButton;
- (void)setBroadcastPickerButton:;
+ (void)tm_hook_screen_recorder_preload;
+ (void)tspk_screen_recorder_preload;
@end
