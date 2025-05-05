@interface MLCDeviceOps : NSObject
@property (nonatomic) @ source;
@property (nonatomic) @ secondarySource;
@property (nonatomic) @ tertiarySource;
@property (nonatomic) @ result;
@property (nonatomic) Q batchSize;
@property (nonatomic) BOOL sourceOfForwardNeededForGradient;
@property (nonatomic) BOOL resultOfForwardNeededForGradient;
- (id)result;
- (unsigned long long)batchSize;
- (void)setBatchSize:;
- (void).cxx_destruct;
- (id)source;
- (void)setSource:;
- (void)setResult:;
- (id)copyWithZone:;
- (id)secondarySource;
- (void)setSecondarySource:;
- (id)initWithSource:secondarySource:result:batchSize:;
- (id)tertiarySource;
- (void)setTertiarySource:;
- (BOOL)sourceOfForwardNeededForGradient;
- (void)setSourceOfForwardNeededForGradient:;
- (BOOL)resultOfForwardNeededForGradient;
- (void)setResultOfForwardNeededForGradient:;
@end
