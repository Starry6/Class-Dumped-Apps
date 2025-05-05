@interface IESLiveChorusVideoInfo : IESLivePBBaseMessage
@property (nonatomic) q itemId;
@property (nonatomic) NSString itemDescription;
@property (nonatomic) NSString itemURL;
@property (nonatomic) q authorId;
@property (nonatomic) NSString authorName;
@property (nonatomic) q useTimes;
@property (nonatomic) HTSLiveImage image;
@property (nonatomic) BOOL hasImage;
+ (id)descriptor;
@end
