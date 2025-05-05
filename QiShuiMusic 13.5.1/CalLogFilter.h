@interface CalLogFilter : NSObject
@property (nonatomic) NSArray includesAsRegexes;
@property (nonatomic) NSArray excludesAsRegexes;
@property (nonatomic) NSInteger minimumLevel;
@property (nonatomic) NSArray includes;
@property (nonatomic) NSArray excludes;
@property (nonatomic) NSSet includesRegardlessOfLevel;
- (id)init;
- (void).cxx_destruct;
- (id)description;
- (void)setIncludes:;
- (void)setExcludes:;
- (id)generateRegexesForPatterns:;
- (BOOL)proceedProcessingLogName:;
- (int)minimumLevel;
- (void)setMinimumLevel:;
- (id)includes;
- (id)excludes;
- (id)includesAsRegexes;
- (void)setIncludesAsRegexes:;
- (id)excludesAsRegexes;
- (void)setExcludesAsRegexes:;
- (id)includesRegardlessOfLevel;
- (void)setIncludesRegardlessOfLevel:;
@end
