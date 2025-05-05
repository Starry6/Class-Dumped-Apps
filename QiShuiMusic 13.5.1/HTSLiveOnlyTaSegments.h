@interface HTSLiveOnlyTaSegments : IESLivePBBaseMessage
@property (nonatomic) q taId;
@property (nonatomic) NSString taNickName;
@property (nonatomic) HTSLiveImage avatar;
@property (nonatomic) BOOL hasAvatar;
@property (nonatomic) NSMutableArray segmentsArray;
@property (nonatomic) Q segmentsArray_Count;
+ (id)descriptor;
@end
