@interface SGSuggestedEventLaunchInfo : NSObject
@property (nonatomic) NSString userActivityString;
@property (nonatomic) NSString bundleId;
@property (nonatomic) NSUserActivity userActivity;
@property (nonatomic) INIntent intent;
@property (nonatomic) NSURL sourceURL;
@property (nonatomic) NSString localizedShowInString;
- (id)intent;
- (id)bundleId;
- (id)sourceURL;
- (id)initWithCoder:;
- (void)encodeWithCoder:;
- (id)userActivityString;
- (void).cxx_destruct;
- (id)userActivity;
- (id)initWithBundleId:localizedShowInString:userActivity:intent:sourceURL:;
- (id)localizedShowInString;
- (void)setUserActivityString:;
+ (BOOL)supportsSecureCoding;
@end
