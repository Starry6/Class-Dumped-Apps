@interface ASDClipCardMetricsEvent : NSObject
@property (nonatomic) NSString bundleID;
@property (nonatomic) NSNumber itemID;
@property (nonatomic) NSString referralSource;
@property (nonatomic) NSString referralSourceBundleID;
@property (nonatomic) NSString referrerType;
@property (nonatomic) BOOL thirdPartyWithNoAppReferrer;
@property (nonatomic) NSURL sourceURL;
- (void)setSourceURL:;
- (id)itemID;
- (id)sourceURL;
- (id)initWithCoder:;
- (void)setItemID:;
- (void)encodeWithCoder:;
- (void).cxx_destruct;
- (id)bundleID;
- (void)setBundleID:;
- (id)referrerType;
- (void)setReferrerType:;
- (BOOL)thirdPartyWithNoAppReferrer;
- (void)setThirdPartyWithNoAppReferrer:;
- (id)initWithClipBundleID:;
- (void)setReferralSource:;
- (id)referralSource;
- (id)referralSourceBundleID;
- (void)setReferralSourceBundleID:;
+ (BOOL)supportsSecureCoding;
@end
