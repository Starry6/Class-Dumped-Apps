@interface PRNLPLanguageModel : NSObject
@property (nonatomic) NSString localization;
@property (nonatomic) q modelType;
- (long long)modelType;
- (id)localization;
- (void)dealloc;
- (id)description;
- (id)stateWithContext:;
- (id)modelOptionsForLocale:type:;
- (id)initWithLocalization:type:;
- (BOOL)getConditionalProbabilityForString:context:probability:;
- (BOOL)stringIsBlocklisted:;
+ (id)languageModelWithLocalization:type:;
@end
