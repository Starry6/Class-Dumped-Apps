@interface BWSubjectRelightingCalculatorResult : NSObject
@property (nonatomic) BOOL relightingRequired;
@property (nonatomic) float curveParameter;
- (id)init;
- (void)dealloc;
- (BOOL)relightingRequired;
- (float)curveParameter;
- (BOOL)waitForResult;
- (void)_completeWithRelightingRequired:curveParameter:;
@end
