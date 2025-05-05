@interface MKClipServices : NSObject
- (id)init;
- (void).cxx_destruct;
- (void)appClipWithQuickLink:completion:;
- (void)quickLinksCopyByRemovingNonAvailableAppClipLinks:completion:;
- (void)appClipsFromQuickLinks:completion:;
- (void)_validateAppClipBasedQuickLinks:completion:;
- (void)requestAppClip:completion:;
+ (id)sharedInstance;
@end
