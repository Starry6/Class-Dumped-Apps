@interface AWEUGFCoinFollowTaskModel : MTLModel
@property (nonatomic) BOOL hasNext;
@property (nonatomic) NSString taskToken;
@property (nonatomic) NSString activityID;
@property (nonatomic) AWEFCoinTaskDataBubble bubble;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)taskToken;
- (void)setTaskToken:;
- (void)setHasNext:;
- (void).cxx_destruct;
- (id)bubble;
- (void)setBubble:;
- (id)activityID;
- (void)setActivityID:;
- (BOOL)hasNext;
+ (id)JSONKeyPathsByPropertyKey;
@end
