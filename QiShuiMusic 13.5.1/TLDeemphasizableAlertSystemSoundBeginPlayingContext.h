@interface TLDeemphasizableAlertSystemSoundBeginPlayingContext : NSObject
@property (nonatomic) TLAlert alert;
@property (nonatomic) TLAlertSystemSoundContext alertSystemSoundContext;
@property (nonatomic) NSString toneIdentifierForDeemphasizingAlert;
@property (nonatomic) TLSystemSound sound;
- (id)alert;
- (void)setSound:;
- (void)setAlert:;
- (id)sound;
- (void).cxx_destruct;
- (id)alertSystemSoundContext;
- (void)setAlertSystemSoundContext:;
- (id)toneIdentifierForDeemphasizingAlert;
- (void)setToneIdentifierForDeemphasizingAlert:;
@end
