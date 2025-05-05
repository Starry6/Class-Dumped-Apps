@interface IESLivePlaybackJsbTopicModel : IESLiveDynamicMTLModel
@property (nonatomic) NSString topicID;
@property (nonatomic) NSString topicName;
@property (nonatomic) BOOL didSelect;
@property (nonatomic) NSDictionary dictionaryValue;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)setDidSelect:;
- (void)setTopicID:;
- (id)topicID;
- (void).cxx_destruct;
- (BOOL)didSelect;
- (id)topicName;
- (void)setTopicName:;
+ (id)JSONKeyPathsByPropertyKey;
@end
