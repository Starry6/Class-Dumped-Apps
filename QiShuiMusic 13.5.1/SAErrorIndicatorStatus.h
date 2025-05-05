@interface SAErrorIndicatorStatus : AceObject
@property (nonatomic) BOOL deviceFixingProblems;
@property (nonatomic) NSArray values;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)groupIdentifier;
- (id)values;
- (id)encodedClassName;
- (void)setValues:;
- (BOOL)deviceFixingProblems;
- (void)setDeviceFixingProblems:;
+ (id)errorIndicatorStatus;
+ (id)errorIndicatorStatusWithDictionary:context:;
@end
