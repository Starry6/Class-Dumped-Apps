@interface MPMusicPlayerPlayParametersQueueDescriptor : MPMusicPlayerQueueDescriptor
@property (nonatomic) NSArray playParametersQueue;
@property (nonatomic) MPMusicPlayerPlayParameters startItemPlayParameters;
- (BOOL)isEmpty;
- (id)initWithCoder:;
- (void)encodeWithCoder:;
- (void).cxx_destruct;
- (id)description;
- (BOOL)isEqual:;
- (id)copyWithZone:;
- (id)initWithPlayParametersQueue:;
- (void)setStartTime:forItemWithPlayParameters:;
- (void)setEndTime:forItemWithPlayParameters:;
- (id)playParametersQueue;
- (void)setPlayParametersQueue:;
- (id)startItemPlayParameters;
- (void)setStartItemPlayParameters:;
+ (BOOL)supportsSecureCoding;
@end
