@interface AwardInfo : IESLivePBBaseMessage
@property (nonatomic) NSString name;
@property (nonatomic) NSString count;
@property (nonatomic) HTSLiveImage image;
@property (nonatomic) BOOL hasImage;
+ (id)descriptor;
@end
