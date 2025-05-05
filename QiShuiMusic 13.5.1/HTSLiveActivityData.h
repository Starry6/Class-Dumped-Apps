@interface HTSLiveActivityData : IESLivePBBaseMessage
@property (nonatomic) BOOL xgPlay;
@property (nonatomic) HTSLiveMatchRoomData match;
@property (nonatomic) BOOL hasMatch;
+ (id)descriptor;
@end
