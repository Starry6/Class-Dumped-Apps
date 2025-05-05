@interface MLParameterContainer : NSObject
@property (nonatomic) NSMutableDictionary currentParameterValues;
@property (nonatomic) NSArray parameterKeys;
@property (nonatomic) NSDictionary parameterDescriptions;
- (id)initWithCoder:;
- (void)encodeWithCoder:;
- (void).cxx_destruct;
- (id)description;
- (BOOL)setCurrentValue:forKey:error:;
- (BOOL)validateParameterValue:givenConstraint:;
- (id)currentParameterValues;
- (void)setCurrentParameterValues:;
- (id)parameterKeys;
- (void)setParameterKeys:;
- (id)parameterDescriptions;
- (void)setParameterDescriptions:;
+ (BOOL)supportsSecureCoding;
+ (id)parameterContainerFor:descriptions:;
@end
