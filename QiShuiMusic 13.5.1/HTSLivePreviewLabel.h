@interface HTSLivePreviewLabel : IESLivePBBaseMessage
@property (nonatomic) NSInteger type;
@property (nonatomic) NSMutableArray labelTipsArray;
@property (nonatomic) Q labelTipsArray_Count;
@property (nonatomic) NSInteger labelType;
@property (nonatomic) HTSLiveImage labelImage;
@property (nonatomic) BOOL hasLabelImage;
@property (nonatomic) BOOL hitTest;
+ (id)descriptor;
@end
