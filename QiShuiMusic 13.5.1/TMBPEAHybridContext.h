@interface TMBPEAHybridContext : NSObject
@property (nonatomic) NSArray contextValidationPageTypes;
@property (nonatomic) double contextCleanInterval;
@property (nonatomic) double contextCleanThreshold;
@property (nonatomic) TMBPEAHybridContextValidator validator;
- (double)contextCleanInterval;
- (double)contextCleanThreshold;
- (id)contextValidationPageTypes;
- (double)defaultContextCleanInterval;
- (double)defaultContextCleanThreshold;
- (id)defaultValidationPageTypes;
- (void)setContextCleanInterval:;
- (void)setContextCleanThreshold:;
- (void)setContextValidationPageTypes:;
- (void)setupWithConfig:;
- (void)updateWithConfig:;
- (id)validator;
- (void).cxx_destruct;
- (void)setValidator:;
@end
