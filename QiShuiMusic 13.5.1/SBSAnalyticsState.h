@interface SBSAnalyticsState : NSObject
@property (nonatomic) double timestamp;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)succinctDescriptionBuilder;
- (id)debugDescription;
- (id)objectForKeyedSubscript:;
- (id)initWithTimestamp:payload:;
- (void).cxx_destruct;
- (double)timestamp;
- (id)succinctDescription;
- (id)description;
- (id)coreAnalyticsRepresentation;
- (id)descriptionBuilderWithMultilinePrefix:;
- (id)descriptionWithMultilinePrefix:;
+ (id)withTimestamp:payload:;
+ (id)withTimestamp:;
@end
