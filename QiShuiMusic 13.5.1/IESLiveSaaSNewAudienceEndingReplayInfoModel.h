@interface IESLiveSaaSNewAudienceEndingReplayInfoModel : MTLModel
@property (nonatomic) NSNumber replayStatus;
@property (nonatomic) NSString itemId;
@property (nonatomic) NSString replayHint;
@property (nonatomic) NSString replaySchema;
@property (nonatomic) NSDictionary dictionaryValue;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)replayHint;
- (id)replaySchema;
- (id)replayStatus;
- (void)setReplayHint:;
- (void)setReplaySchema:;
- (void)setReplayStatus:;
- (id)initWithDictionary:error:;
- (void).cxx_destruct;
- (id)itemId;
- (void)setItemId:;
+ (id)JSONKeyPathsByPropertyKey;
@end
