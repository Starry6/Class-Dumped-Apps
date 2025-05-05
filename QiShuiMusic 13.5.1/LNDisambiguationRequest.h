@interface LNDisambiguationRequest : NSObject
@property (nonatomic) NSUUID identifier;
@property (nonatomic) @? completionHandler;
@property (nonatomic) NSString parameterName;
@property (nonatomic) NSArray items;
@property (nonatomic) LNDialog dialog;
- (id)items;
- (id)identifier;
- (void)setCompletionHandler:;
- (id)initWithCoder:;
- (id)parameterName;
- (void)encodeWithCoder:;
- (void).cxx_destruct;
- (id)completionHandler;
- (id)dialog;
- (void)respondWithError:;
- (id)initWithIdentifier:parameterName:items:dialog:;
- (void)respondWithSelectedItemIndex:;
+ (BOOL)supportsSecureCoding;
@end
