@interface VCVideoRuleCollectionsMomentsMac : VCVideoRuleCollectionsMoments
- (id)initWithHardwareSettings:;
- (unsigned char)getMomentsCapabilities;
- (id)getMomentsImageTypes;
- (id)getMomentsVideoCodecs;
+ (id)sharedInstance;
@end
