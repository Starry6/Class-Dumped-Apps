@interface SGMSelfIdPatternMatched : NSObject
@property (nonatomic) PETScalarEventTracker tracker;
- (id)init;
- (id)tracker;
- (void).cxx_destruct;
- (void)trackEventWithScalar:patternType:patternHash:nameTokens:nameClass:messageIndex:;
@end
