@interface HTSLiveRoomTab : IESLivePBBaseMessage
@property (nonatomic) NSInteger tabType;
@property (nonatomic) NSString tabName;
@property (nonatomic) NSString tabURL;
+ (id)descriptor;
@end
