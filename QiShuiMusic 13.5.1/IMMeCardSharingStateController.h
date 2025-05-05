@interface IMMeCardSharingStateController : NSObject
@property (nonatomic) BOOL sharingEnabled;
@property (nonatomic) Q sharingAudience;
@property (nonatomic) Q nameFormat;
@property (nonatomic) BOOL nameForkedFromMeCard;
@property (nonatomic) BOOL imageForkedFromMeCard;
- (id)init;
- (BOOL)sharingEnabled;
- (void)setSharingEnabled:;
- (unsigned long long)sharingAudience;
- (void)setSharingAudience:;
- (BOOL)wasSharingEverEnabled;
- (BOOL)imageForkedFromMeCard;
- (unsigned long long)nameFormat;
- (void)setNameFormat:;
- (void)_migrateMeCardDomains;
- (void)postNameFormatChangedNotification;
- (BOOL)nameForkedFromMeCard;
- (void)setNameForkedFromMeCard:;
- (void)setImageForkedFromMeCard:;
- (void)_incrementSharingVersion;
- (void)_syncPreferenceDidChange;
+ (id)sharedInstance;
@end
