@interface SecExpConcrete_sec_experiment : NSObject
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)identifier;
- (id)initWithName:;
- (void).cxx_destruct;
- (id)name;
- (id)initWithInnerExperiment:;
- (BOOL)experimentIsAllowedForProcess;
- (BOOL)isSamplingDisabledWithDefault:;
- (BOOL)isSamplingDisabled;
- (id)copyExperimentConfiguration;
@end
