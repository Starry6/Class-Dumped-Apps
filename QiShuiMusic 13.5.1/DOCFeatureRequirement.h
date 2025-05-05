@interface DOCFeatureRequirement : NSObject
@property (nonatomic) NSString name;
@property (nonatomic) @? requirementValidationBlock;
- (void).cxx_destruct;
- (id)name;
- (id)initWithName:requirementValidationBlock:;
- (id)requirementValidationBlock;
@end
