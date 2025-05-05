@interface VCPFrameScoreFilter : NSObject
- (void)dealloc;
- (id)initWithFilterTabs:distanceVariance:diffVariance:;
- (float)processFrameScore:validScore:;
@end
