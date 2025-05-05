@interface SACallTreeNode : NSObject
@property (nonatomic) Q sampleCount;
@property (nonatomic) Q startSampleIndex;
- (unsigned long long)sampleCount;
- (void)setSampleCount:;
- (unsigned long long)startSampleIndex;
- (id)initWithStartSampleIndex:sampleCount:;
- (void)setStartSampleIndex:;
@end
