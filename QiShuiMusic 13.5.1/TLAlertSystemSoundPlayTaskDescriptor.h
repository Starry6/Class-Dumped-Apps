@interface TLAlertSystemSoundPlayTaskDescriptor : NSObject
@property (nonatomic) TLAlert alert;
@property (nonatomic) TLSystemSound sound;
@property (nonatomic) TLAlertSystemSoundContext alertSystemSoundContext;
- (id)alert;
- (id)sound;
- (void).cxx_destruct;
- (id)initWithAlert:sound:alertSystemSoundContext:;
- (id)alertSystemSoundContext;
@end
