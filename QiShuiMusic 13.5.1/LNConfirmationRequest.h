@interface LNConfirmationRequest : NSObject
@property (nonatomic) NSUUID identifier;
@property (nonatomic) @? completionHandler;
@property (nonatomic) NSString parameterName;
@property (nonatomic) LNValue value;
@property (nonatomic) LNDialog dialog;
@property (nonatomic) LNViewSnippet viewSnippet;
- (id)identifier;
- (void)setCompletionHandler:;
- (id)initWithCoder:;
- (id)parameterName;
- (void)encodeWithCoder:;
- (void).cxx_destruct;
- (id)value;
- (id)completionHandler;
- (id)dialog;
- (void)respondWithError:;
- (id)initWithIdentifier:parameterName:value:dialog:viewSnippet:;
- (void)respondWithConfirmation:;
- (id)viewSnippet;
+ (BOOL)supportsSecureCoding;
@end
