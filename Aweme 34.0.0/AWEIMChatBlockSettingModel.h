@interface AWEIMChatBlockSettingModel : AWEBaseApiModel
@property (nonatomic) BOOL blockSwitch;
@property (nonatomic) q blockStartTimestamp;
@property (nonatomic) q blockDuration;
@property (nonatomic) NSArray availableBlockDurationList;
@property (nonatomic) NSArray selectedSmartBlockList;
@property (nonatomic) q smartBlockSwitch;
@property (nonatomic) NSArray availableSmartBlockList;
@property (nonatomic) NSArray selfDefinedBlockWordList;
- (long long)blockDuration;
- (void)setBlockDuration:;
- (id)selfDefinedBlockWordList;
- (void)setSelfDefinedBlockWordList:;
- (BOOL)blockSwitch;
- (void)setBlockSwitch:;
- (id)availableBlockDurationList;
- (long long)smartBlockSwitch;
- (void)setSmartBlockSwitch:;
- (id)selectedSmartBlockList;
- (void)setSelectedSmartBlockList:;
- (id)availableSmartBlockList;
- (long long)blockStartTimestamp;
- (void)setBlockStartTimestamp:;
- (void)setAvailableBlockDurationList:;
- (void)setAvailableSmartBlockList:;
- (void).cxx_destruct;
+ (id)availableSmartBlockListJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;
@end
