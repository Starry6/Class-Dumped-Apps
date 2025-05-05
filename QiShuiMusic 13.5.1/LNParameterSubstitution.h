@interface LNParameterSubstitution : NSObject
@property (nonatomic) NSString parameterIdentifier;
@property (nonatomic) NSArray substitutionValues;
- (id)initWithCoder:;
- (void)encodeWithCoder:;
- (void).cxx_destruct;
- (id)parameterIdentifier;
- (id)initWithParameterIdentifier:substitutionValues:;
- (id)substitutionValues;
+ (BOOL)supportsSecureCoding;
@end
