@interface AWEFeedTabJumpItemStorage : MTLModel
@property (nonatomic) NSString tabID;
@property (nonatomic) NSString lastShowTimestamp;
@property (nonatomic) NSArray triggerRecords;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)setTabID:;
- (id)lastShowTimestamp;
- (void)setLastShowTimestamp:;
- (id)triggerRecords;
- (void)setTriggerRecords:;
- (void).cxx_destruct;
- (id)tabID;
+ (id)triggerRecordsJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;
@end
