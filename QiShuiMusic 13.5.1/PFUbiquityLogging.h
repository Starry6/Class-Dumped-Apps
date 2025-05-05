@interface PFUbiquityLogging : NSObject
@property (nonatomic) NSInteger desiredLogLevel;
- (id)init;
- (void)dealloc;
- (void)userDefaultsChanged:;
- (int)desiredLogLevel;
- (void)setDesiredLogLevel:;
+ (void)setLoggingLevel:;
+ (BOOL)canLogMessageAtLevel:;
@end
