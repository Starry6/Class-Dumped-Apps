@interface IESLiveActivityBadges : IESLivePBBaseMessage
@property (nonatomic) NSMutableArray badgesArray;
@property (nonatomic) Q badgesArray_Count;
@property (nonatomic) NSString openURL;
+ (id)descriptor;
@end
