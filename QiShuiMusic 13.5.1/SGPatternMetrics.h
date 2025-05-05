@interface SGPatternMetrics : NSObject
@property (nonatomic) SGMSelfIdPatternMatched selfIdPatternMatched;
- (id)init;
- (void).cxx_destruct;
- (id)selfIdPatternMatched;
- (void)setSelfIdPatternMatched:;
+ (id)instance;
+ (void)recordSelfIdMatchWithPatternType:patternHash:nameTokenCount:nameClassification:messageIndex:;
@end
