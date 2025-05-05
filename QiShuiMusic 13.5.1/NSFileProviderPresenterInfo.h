@interface NSFileProviderPresenterInfo : NSObject
@property (nonatomic) NSURL changedURL;
@property (nonatomic) {?=[8I]} presenterAuditToken;
@property (nonatomic) NSString presenterID;
@property (nonatomic) NSSet observedUbiquityAttributes;
- (void)dealloc;
- (id)observedUbiquityAttributes;
- (id)presenterID;
- (id)initWithCoder:;
- (id)changedURL;
- (void)encodeWithCoder:;
- (void)setChangedURL:;
- (id)presenterAuditToken;
+ (BOOL)supportsSecureCoding;
+ (id)infoWithPresenterID:auditToken:observedUbiquityAttributes:;
@end
