@interface MNAudioSessionResourceAccess : NSObject
@property (nonatomic) <MNAudioSessionAccessDelegate> delegate;
@property (nonatomic) Q promptStyle;
@property (nonatomic) Q state;
- (id)init;
- (void)setDelegate:;
- (BOOL)deactivate;
- (unsigned long long)state;
- (id)delegate;
- (void).cxx_destruct;
- (BOOL)activate;
- (unsigned long long)promptStyle;
- (BOOL)updatePropertiesWithOptions:forTransportType:error:;
- (void)_changeNumChannels;
- (id)_stringForAVAudioSessionErrorCode:;
+ (BOOL)headphonesAreInUse;
+ (BOOL)deviceSpeakerIsInUse;
@end
