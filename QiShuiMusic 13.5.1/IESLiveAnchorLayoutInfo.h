@interface IESLiveAnchorLayoutInfo : IESLivePBBaseMessage
@property (nonatomic) NSInteger uiLayout;
@property (nonatomic) NSInteger range;
@property (nonatomic) NSString bigAnchorId;
@property (nonatomic) NSString bigAnchorIdStr;
+ (id)descriptor;
@end
