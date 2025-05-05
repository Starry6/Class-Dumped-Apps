@interface SFBannerModel : NSObject
@property (nonatomic) @? action;
@property (nonatomic) q contentVariant;
@property (nonatomic) UIImage image;
@property (nonatomic) NSString title;
@property (nonatomic) NSString message;
@property (nonatomic) q numberOfTrackers;
@property (nonatomic) q userInterfaceStyle;
- (void)setUserInterfaceStyle:;
- (id)action;
- (unsigned long long)hash;
- (long long)userInterfaceStyle;
- (id)title;
- (id)message;
- (void).cxx_destruct;
- (long long)numberOfTrackers;
- (id)description;
- (BOOL)isEqual:;
- (id)image;
- (id)initWithContentVariant:action:;
- (long long)contentVariant;
+ (id)bannerWithTitle:message:dismissHandler:;
+ (id)bannerWithImage:title:message:interactive:dismissHandler:;
+ (id)privacyReportBannerWithNumberOfTrackers:selectionHandler:;
@end
