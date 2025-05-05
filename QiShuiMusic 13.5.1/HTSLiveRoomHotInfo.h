@interface HTSLiveRoomHotInfo : IESLivePBBaseMessage
@property (nonatomic) NSInteger localHotStrategy;
@property (nonatomic) NSInteger publicAreaLevel;
@property (nonatomic) NSInteger giftLevel;
+ (id)descriptor;
@end
