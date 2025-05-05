@interface HTSLiveTopicMeta : IESLivePBBaseMessage
@property (nonatomic) HTSLiveImage background;
@property (nonatomic) BOOL hasBackground;
@property (nonatomic) NSMutableArray backgroundColorsArray;
@property (nonatomic) Q backgroundColorsArray_Count;
@property (nonatomic) HTSLiveImage cardIcon;
@property (nonatomic) BOOL hasCardIcon;
+ (id)descriptor;
@end
