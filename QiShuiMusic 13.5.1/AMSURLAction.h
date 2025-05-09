@interface AMSURLAction : NSObject
@property (nonatomic) AMSAuthenticateResult authenticateResult;
@property (nonatomic) AMSDialogResult dialogResult;
@property (nonatomic) NSDictionary updatedHeaders;
@property (nonatomic) NSData updatedBody;
@property (nonatomic) NSString updatedMethod;
@property (nonatomic) q actionType;
@property (nonatomic) NSString updatedBuyParams;
@property (nonatomic) NSError error;
@property (nonatomic) NSString reason;
@property (nonatomic) NSURL redirectURL;
@property (nonatomic) NSString retryIdentifier;
- (id)redirectURL;
- (id)updatedBuyParams;
- (void)setUpdatedBody:;
- (long long)actionType;
- (id)initWithType:error:reason:redirectURL:;
- (void)setUpdatedMethod:;
- (id)retryIdentifier;
- (void)setUpdatedHeaders:;
- (id)updatedHeaders;
- (id)reason;
- (void)setUpdatedBuyParams:;
- (void)setRetryIdentifier:;
- (id)error;
- (id)initWithCoder:;
- (void)setReason:;
- (id)dialogResult;
- (void)encodeWithCoder:;
- (void)setAuthenticateResult:;
- (void).cxx_destruct;
- (void)setDialogResult:;
- (id)description;
- (id)updatedBody;
- (id)updatedMethod;
- (id)initWithType:;
- (id)authenticateResult;
+ (BOOL)supportsSecureCoding;
+ (id)proceedAction;
+ (id)actionWithError:;
+ (id)redirectActionWithURL:;
+ (id)retryAction;
@end
