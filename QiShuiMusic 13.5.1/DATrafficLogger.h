@interface DATrafficLogger : NSObject
@property (nonatomic) NSString filename;
- (id)filename;
- (void)setFilename:;
- (void).cxx_destruct;
- (void)_ensureCustomLogFile;
- (id)initWithFilename:;
- (void)logSnippet:;
- (void)slurpAndRemoveLookasideFile:prefixString:suffixString:;
+ (BOOL)enabled;
@end
