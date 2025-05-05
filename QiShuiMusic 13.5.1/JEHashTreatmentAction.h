@interface JEHashTreatmentAction : JETreatmentAction
@property (nonatomic) NSString namespace;
@property (nonatomic) NSDictionary configuration;
@property (nonatomic) NSString topic;
- (void)setTopic:;
- (id)namespace;
- (void)setConfiguration:;
- (void)setNamespace:;
- (id)configuration;
- (void).cxx_destruct;
- (id)topic;
- (id)initWithField:configuration:;
- (id)performAction:context:;
- (id)initWithField:configuration:topic:;
- (id)hashOf:userId:;
@end
