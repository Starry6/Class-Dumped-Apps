@interface MTLCompileOptions : NSObject
@property (nonatomic) BOOL tracingEnabled;
@property (nonatomic) BOOL glBufferBindPoints;
@property (nonatomic) BOOL debuggingEnabled;
@property (nonatomic) BOOL compileTimeStatisticsEnabled;
@property (nonatomic) NSString additionalCompilerArguments;
@property (nonatomic) C sourceLanguage;
@property (nonatomic) NSDictionary preprocessorMacros;
@property (nonatomic) BOOL fastMathEnabled;
@property (nonatomic) Q languageVersion;
@property (nonatomic) q libraryType;
@property (nonatomic) NSString installName;
@property (nonatomic) NSArray libraries;
@property (nonatomic) BOOL preserveInvariance;
@property (nonatomic) q optimizationLevel;
- (id)copyWithZone:;
+ (id)allocWithZone:;
+ (id)alloc;
@end
