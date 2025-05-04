@interface AWEFeedTabJumpTriggerRecord : MTLModel
@property (nonatomic) NSString tabID;
@property (nonatomic) NSString awemeID;
@property (nonatomic) NSString timestamp;
@property (nonatomic) NSString eventType;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)setAwemeID:;
- (id)awemeID;
- (void)setTabID:;
- (id)timestamp;
- (void)setEventType:;
- (id)eventType;
- (void)setTimestamp:;
- (void).cxx_destruct;
- (id)tabID;
+ (id)JSONKeyPathsByPropertyKey;
@end
