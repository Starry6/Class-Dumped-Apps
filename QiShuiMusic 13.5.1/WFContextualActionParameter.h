@interface WFContextualActionParameter : NSObject
@property (nonatomic) NSString wfParameterKey;
@property (nonatomic) <WFPropertyListObject> wfSerializedRepresentation;
@property (nonatomic) BOOL askEachTime;
@property (nonatomic) BOOL actionInput;
@property (nonatomic) NSString type;
@property (nonatomic) NSString displayString;
- (id)displayString;
- (id)initWithType:displayString:wfParameterKey:isActionInput:;
- (id)initWithCoder:;
- (id)initWithType:displayString:wfParameterKey:wfSerializedRepresentation:askEachTime:actionInput:;
- (unsigned long long)hash;
- (void)encodeWithCoder:;
- (id)type;
- (void).cxx_destruct;
- (id)wfSerializedRepresentation;
- (id)initWithType:displayString:wfParameterKey:wfSerializedRepresentation:;
- (BOOL)isActionInput;
- (id)initWithType:displayString:wfParameterKey:askEachTime:;
- (id)wfParameterKey;
- (BOOL)isEqual:;
- (BOOL)isAskEachTime;
+ (BOOL)supportsSecureCoding;
@end
