@interface HMInstanceConfig : NSObject
@property (nonatomic) NSString moduleId;
@property (nonatomic) NSString aid;
@property (nonatomic) BOOL enableSemiFinished;
@property (nonatomic) BOOL enableAggregate;
@property (nonatomic) HMModuleConfig moduleConfig;
- (BOOL)enableAggregate;
- (BOOL)enableSemiFinished;
- (id)initWithModuleId:aid:;
- (id)moduleId;
- (void)setEnableAggregate:;
- (void)setEnableSemiFinished:;
- (void).cxx_destruct;
- (id)moduleConfig;
- (id)aid;
@end
