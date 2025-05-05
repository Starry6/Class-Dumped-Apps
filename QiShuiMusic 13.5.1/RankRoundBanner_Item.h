@interface RankRoundBanner_Item : IESLivePBBaseMessage
@property (nonatomic) NSString URL;
@property (nonatomic) NSMutableArray listArray;
@property (nonatomic) Q listArray_Count;
@property (nonatomic) NSString name;
@property (nonatomic) HTSLiveImage icon;
@property (nonatomic) BOOL hasIcon;
@property (nonatomic) HTSLiveImage background;
@property (nonatomic) BOOL hasBackground;
+ (id)descriptor;
@end
