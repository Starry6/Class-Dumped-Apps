@interface LNSuccessResult : NSObject
@property (nonatomic) NSData actionData;
@property (nonatomic) NSData outputData;
@property (nonatomic) NSData appContextData;
@property (nonatomic) NSData predictionsData;
@property (nonatomic) LNAction action;
@property (nonatomic) LNActionOutput output;
@property (nonatomic) LNActionAppContext actionAppContext;
@property (nonatomic) NSArray predictions;
- (id)output;
- (id)action;
- (id)predictions;
- (id)initWithCoder:;
- (unsigned long long)hash;
- (void)encodeWithCoder:;
- (id)actionData;
- (void).cxx_destruct;
- (id)description;
- (id)outputData;
- (BOOL)isEqual:;
- (id)verboseDescription;
- (id)copyWithZone:;
- (id)predictionsData;
- (id)initWithAction:output:actionAppContext:predictions:;
- (id)initWithActionData:outputData:appContextData:predictionsData:;
- (id)actionAppContext;
- (id)appContextData;
+ (BOOL)supportsSecureCoding;
@end
