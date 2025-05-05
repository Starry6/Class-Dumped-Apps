@interface VCVideoRuleCollectionsMoments : NSObject
- (id)init;
- (unsigned char)getMomentsCapabilities;
- (id)getMomentsImageTypes;
- (id)getMomentsVideoCodecs;
+ (id)sharedInstance;
@end
