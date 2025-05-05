@interface SubscribeInfo : IESLivePBBaseMessage
@property (nonatomic) q subscribeCount;
@property (nonatomic) NSMutableArray subscribeUserAvatarArray;
@property (nonatomic) Q subscribeUserAvatarArray_Count;
@property (nonatomic) NSString subscribeCountStr;
+ (id)descriptor;
@end
