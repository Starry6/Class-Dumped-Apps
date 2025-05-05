@interface BMDSLGraphValidator : NSObject
@property (nonatomic) BOOL passthrough;
@property (nonatomic) NSSet validKeyPaths;
@property (nonatomic) NSSet allowedOperations;
@property (nonatomic) NSSet allowedStreamTypes;
- (id)initWithValidKeyPaths:allowedOperations:allowedStreamTypes:;
- (id)init;
- (BOOL)isStreamTypeAllowed:;
- (id)allowedStreamTypes;
- (id)validKeyPaths;
- (void).cxx_destruct;
- (id)allowedOperations;
- (BOOL)isExecutionAllowedForGraph:;
- (BOOL)passthrough;
+ (id)legacyValidKeyPaths;
+ (id)genericValidKeyPaths;
+ (id)passthroughValidator;
+ (id)currentProcessValidator;
+ (void)setCurrentProcessValidator:;
@end
