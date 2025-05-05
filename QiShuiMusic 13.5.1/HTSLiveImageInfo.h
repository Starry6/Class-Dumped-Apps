@interface HTSLiveImageInfo : IESLivePBBaseMessage
@property (nonatomic) HTSLiveImage img;
@property (nonatomic) BOOL hasImg;
@property (nonatomic) NSInteger start;
@property (nonatomic) NSInteger duration;
@property (nonatomic) NSInteger x;
@property (nonatomic) NSInteger y;
@property (nonatomic) NSInteger width;
@property (nonatomic) NSInteger height;
@property (nonatomic) BOOL needCircle;
+ (id)descriptor;
@end
