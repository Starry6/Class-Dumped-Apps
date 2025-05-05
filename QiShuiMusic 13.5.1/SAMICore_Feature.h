@interface SAMICore_Feature : NSObject
@property (nonatomic) float time;
@property (nonatomic) float duration;
@property (nonatomic) ^f values;
@property (nonatomic) I numValues;
- (void)setTime:;
- (float)time;
- (id)values;
- (void)setDuration:;
- (void)setValues:;
- (float)duration;
- (unsigned int)numValues;
- (void)setNumValues:;
@end
