@interface MPChangeLanguageOptionCommandEvent : MPRemoteCommandEvent
@property (nonatomic) MPNowPlayingInfoLanguageOption languageOption;
@property (nonatomic) q setting;
- (void).cxx_destruct;
- (id)languageOption;
- (id)initWithCommand:mediaRemoteType:options:;
- (long long)setting;
@end
