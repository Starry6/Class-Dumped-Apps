@interface HTSLiveRoomSpecificSceneTypeInfo : IESLivePBBaseMessage
@property (nonatomic) BOOL isUnionLiveRoom;
@property (nonatomic) BOOL isLife;
@property (nonatomic) NSInteger isProtectedRoom;
@property (nonatomic) NSInteger isLastedGoodsRoom;
@property (nonatomic) NSInteger isDesireRoom;
@property (nonatomic) BOOL commentaryType;
@property (nonatomic) NSInteger isSubOrientationVerticalRoom;
+ (id)descriptor;
@end
