@interface AWEIMGroupSPBannerSettings : NSObject
@property (nonatomic) q maxShowCount;
@property (nonatomic) double maxShowInterval;
@property (nonatomic) NSString title;
@property (nonatomic) NSString icon;
@property (nonatomic) NSString buttonTitle;
@property (nonatomic) NSString disableButtonToast;
@property (nonatomic) BOOL disableCloseButton;
@property (nonatomic) BOOL forceShowBanner;
@property (nonatomic) BOOL disablePrivateChatShow;
- (long long)maxShowCount;
- (double)maxShowInterval;
- (id)disableButtonToast;
- (BOOL)disableCloseButton;
- (BOOL)disablePrivateChatShow;
- (id)init;
- (id)icon;
- (void).cxx_destruct;
- (id)title;
- (id)initWithDictionary:;
- (id)buttonTitle;
- (BOOL)forceShowBanner;
@end
