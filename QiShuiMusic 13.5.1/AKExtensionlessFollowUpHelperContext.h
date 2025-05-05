@interface AKExtensionlessFollowUpHelperContext : NSObject
@property (nonatomic) NSString uniqueItemIdentifier;
@property (nonatomic) NSString altDSID;
@property (nonatomic) NSString urlKey;
@property (nonatomic) NSString akAction;
@property (nonatomic) NSDictionary additionalInfo;
@property (nonatomic) UIViewController presentingViewController;
- (id)presentingViewController;
- (void)setPresentingViewController:;
- (void)setAltDSID:;
- (id)altDSID;
- (id)additionalInfo;
- (id)initWithCoder:;
- (void)encodeWithCoder:;
- (void).cxx_destruct;
- (id)description;
- (void)setAdditionalInfo:;
- (id)akAction;
- (void)setAkAction:;
- (id)uniqueItemIdentifier;
- (void)setUniqueItemIdentifier:;
- (id)urlKey;
- (void)setUrlKey:;
+ (BOOL)supportsSecureCoding;
@end
