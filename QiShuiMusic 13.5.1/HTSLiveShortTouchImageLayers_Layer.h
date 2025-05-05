@interface HTSLiveShortTouchImageLayers_Layer : IESLivePBBaseMessage
@property (nonatomic) NSString URL;
@property (nonatomic) NSInteger x;
@property (nonatomic) NSInteger y;
@property (nonatomic) NSInteger width;
@property (nonatomic) NSInteger height;
@property (nonatomic) NSInteger radius;
+ (id)descriptor;
@end
