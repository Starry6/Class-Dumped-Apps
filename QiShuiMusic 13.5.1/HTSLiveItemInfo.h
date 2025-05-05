@interface HTSLiveItemInfo : IESLivePBBaseMessage
@property (nonatomic) q itemId;
@property (nonatomic) NSString title;
@property (nonatomic) NSString tagType;
@property (nonatomic) NSInteger lastest;
@property (nonatomic) NSInteger total;
@property (nonatomic) NSString playCounts;
@property (nonatomic) q viewRight;
@property (nonatomic) NSString itemIdStr;
@property (nonatomic) NSInteger duration;
+ (id)descriptor;
@end
