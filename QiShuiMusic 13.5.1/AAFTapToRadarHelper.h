@interface AAFTapToRadarHelper : NSObject
- (void)tapToRadarWithRequest:completion:;
- (void)_showAlertForRequest:completion:;
- (id)_notificationDictionaryForRequest:;
- (unsigned long long)_adjustedOptionFlags:;
- (void)_launchTTRWithRequest:completion:;
@end
