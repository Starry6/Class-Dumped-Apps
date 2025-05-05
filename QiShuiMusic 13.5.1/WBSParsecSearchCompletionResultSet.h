@interface WBSParsecSearchCompletionResultSet : NSObject
@property (nonatomic) NSString status;
@property (nonatomic) NSString errorCodeString;
@property (nonatomic) NSString completionString;
@property (nonatomic) NSString prefix;
@property (nonatomic) NSString feedbackQueryIdentifier;
@property (nonatomic) NSArray results;
@property (nonatomic) double maxAge;
@property (nonatomic) double completionScore;
- (void)setStatus:;
- (double)maxAge;
- (id)completionString;
- (id)results;
- (id)prefix;
- (void).cxx_destruct;
- (id)status;
- (id)_initWithDictionary:cache:;
- (void)enumeratePatternsUsingBlock:;
- (id)errorCodeString;
- (id)feedbackQueryIdentifier;
- (double)completionScore;
+ (id)resultSetSchemaWithCache:;
+ (id)resultSetWithDictionary:cache:;
@end
