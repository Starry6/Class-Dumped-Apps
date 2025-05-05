@interface MLIdentity : MLModel
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)init;
- (id)predictionFromFeatures:options:error:;
+ (id)loadModelFromSpecification:configuration:error:;
@end
