@interface LNActionConfirmationRequest : NSObject
@property (nonatomic) NSUUID identifier;
@property (nonatomic) @? completionHandler;
@property (nonatomic) LNSuccessResult result;
- (id)result;
- (id)identifier;
- (void)setCompletionHandler:;
- (id)initWithCoder:;
- (void)encodeWithCoder:;
- (void).cxx_destruct;
- (id)completionHandler;
- (void)respondWithError:;
- (void)respondWithConfirmation:;
- (id)initWithIdentifier:result:;
+ (BOOL)supportsSecureCoding;
@end
