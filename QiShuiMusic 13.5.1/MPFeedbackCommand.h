@interface MPFeedbackCommand : MPRemoteCommand
@property (nonatomic) BOOL active;
@property (nonatomic) NSString localizedTitle;
@property (nonatomic) NSString localizedShortTitle;
- (void)setLocalizedShortTitle:;
- (long long)presentationStyle;
- (id)_mediaRemoteCommandInfoOptions;
- (id)localizedShortTitle;
- (id)newCommandEventWithState:;
- (void).cxx_destruct;
- (id)localizedTitle;
- (void)setPresentationStyle:;
- (void)setActive:;
- (void)setLocalizedTitle:;
- (BOOL)isActive;
@end
