@interface HMDCrashSegment : HMDCrashModel
@property (nonatomic) Q base;
@property (nonatomic) Q size;
@property (nonatomic) NSString segmentName;
@property (nonatomic) NSArray sections;
- (id)sections;
- (void)updateWithDictionary:;
- (id)segmentName;
- (void)setBase:;
- (void)setSegmentName:;
- (unsigned long long)base;
- (void).cxx_destruct;
- (void)setSections:;
- (void)setSize:;
- (unsigned long long)size;
@end
