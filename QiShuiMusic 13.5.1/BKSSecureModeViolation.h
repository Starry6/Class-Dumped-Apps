@interface BKSSecureModeViolation : NSObject
@property (nonatomic) NSNumber processId;
@property (nonatomic) NSArray contextIds;
@property (nonatomic) NSDictionary layerNamesByContext;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)processId;
- (id)succinctDescriptionBuilder;
- (void)setProcessId:;
- (void).cxx_destruct;
- (id)succinctDescription;
- (id)description;
- (id)descriptionBuilderWithMultilinePrefix:;
- (id)descriptionWithMultilinePrefix:;
- (id)initWithProcessId:contextIds:;
- (id)contextIds;
- (void)setContextIds:;
- (id)layerNamesByContext;
- (void)setLayerNamesByContext:;
@end
