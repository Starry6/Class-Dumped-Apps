@interface FlexActivity_Content : IESLivePBBaseMessage
@property (nonatomic) NSInteger type;
@property (nonatomic) NSString text;
@property (nonatomic) HTSLiveImage image;
@property (nonatomic) BOOL hasImage;
+ (id)descriptor;
@end
