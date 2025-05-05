@interface BDRuleParameterBuilder : NSObject
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (BOOL)__checkValueType:type:;
- (id)checkResult:builder:error:;
- (id)generateValueFor:extra:error:;
@end
