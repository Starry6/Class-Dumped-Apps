@interface HTSLiveProductRichText_Image : IESLivePBBaseMessage
@property (nonatomic) HTSLiveImage img;
@property (nonatomic) BOOL hasImg;
@property (nonatomic) NSInteger width;
@property (nonatomic) NSInteger height;
+ (id)descriptor;
@end
