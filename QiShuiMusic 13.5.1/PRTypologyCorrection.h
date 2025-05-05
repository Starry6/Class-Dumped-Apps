@interface PRTypologyCorrection : NSObject
- (void)dealloc;
- (id)description;
- (id)initWithString:range:;
- (id)dictionaryRepresentation;
- (void)addTypologyCorrectionLog:;
- (void)closeTypologyCorrectionWithResult:;
+ (id)openTypologyCorrectionWithString:range:inString:;
@end
