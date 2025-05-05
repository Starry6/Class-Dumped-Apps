@interface LNNeedsValueRequest : NSObject
@property (nonatomic) NSUUID identifier;
@property (nonatomic) @? completionHandler;
@property (nonatomic) NSString parameterName;
@property (nonatomic) LNDialog dialog;
- (id)identifier;
- (void)setCompletionHandler:;
- (id)initWithCoder:;
- (id)parameterName;
- (void)encodeWithCoder:;
- (void).cxx_destruct;
- (id)completionHandler;
- (id)dialog;
- (void)respondWithValue:;
- (void)respondWithError:;
- (id)initWithIdentifier:parameterName:dialog:;
+ (BOOL)supportsSecureCoding;
@end
