@interface AWERuleParameterBuilder : NSObject
@property (nonatomic) <BDRuleParameterBuilderProtocol> builder;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)generateValueFor:extra:error:;
- (id)builder;
- (id)initWithBuilder:;
- (void).cxx_destruct;
- (void)setBuilder:;
@end
