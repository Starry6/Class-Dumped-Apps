@interface PatternPlayerBase : NSObject
@property (nonatomic) CHHapticEngine engine;
@property (nonatomic) NSString patternID;
@property (nonatomic) double patternDuration;
- (id)engine;
- (void)setEngine:;
- (void).cxx_destruct;
- (double)patternDuration;
- (BOOL)needsResetForAction:;
- (id)patternID;
@end
