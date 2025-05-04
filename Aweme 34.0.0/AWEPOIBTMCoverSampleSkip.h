@interface AWEPOIBTMCoverSampleSkip : NSObject
@property (nonatomic) double sampleRatio;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (BOOL)judgeIsSkipCheckWithEvent:params:;
- (double)initSampleRatio;
- (double)sampleRatio;
- (void)setSampleRatio:;
- (id)init;
@end
