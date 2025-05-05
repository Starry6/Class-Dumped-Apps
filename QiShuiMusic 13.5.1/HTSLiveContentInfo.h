@interface HTSLiveContentInfo : IESLivePBBaseMessage
@property (nonatomic) q contentId;
@property (nonatomic) NSString title;
@property (nonatomic) NSString tagType;
@property (nonatomic) NSInteger lastest;
@property (nonatomic) NSInteger total;
@property (nonatomic) NSString category;
@property (nonatomic) q viewRight;
@property (nonatomic) NSString contentIdStr;
@property (nonatomic) NSInteger duration;
+ (id)descriptor;
@end
