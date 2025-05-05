@interface InteractThumbupData_ThumbupArgs : IESLivePBBaseMessage
@property (nonatomic) q uid;
@property (nonatomic) q roomId;
@property (nonatomic) q anchorUid;
+ (id)descriptor;
@end
