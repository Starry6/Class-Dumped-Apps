@interface AWEFantaSceneInteractionModel : NSObject
@property (nonatomic) NSString referString;
@property (nonatomic) NSMutableDictionary interactionDict;
@property (nonatomic) q maxRecordVideoCount;
@property (nonatomic) q hasRecordVideoCount;
@property (nonatomic) NSMutableArray interactionRecordList;
- (id)referString;
- (void)setReferString:;
- (void)setInteractionDict:;
- (void)setInteractionRecordList:;
- (id)interactionDict;
- (long long)maxRecordVideoCount;
- (void)setMaxRecordVideoCount:;
- (long long)hasRecordVideoCount;
- (void)setHasRecordVideoCount:;
- (id)interactionRecordList;
- (void)decreaseInteractionCount:;
- (void)cleanInteraction;
- (long long)interactionCountWithInteraction:;
- (void)increaseInteractionCount:;
- (void)onVideoSwitch;
- (id)init;
- (void)encodeWithCoder:;
- (void).cxx_destruct;
- (id)initWithCoder:;
- (id)copyWithZone:;
@end
