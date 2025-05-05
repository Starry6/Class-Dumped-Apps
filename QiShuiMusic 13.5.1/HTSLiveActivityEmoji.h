@interface HTSLiveActivityEmoji : IESLivePBBaseMessage
@property (nonatomic) q id_p;
@property (nonatomic) NSString idStr;
@property (nonatomic) NSString name;
@property (nonatomic) HTSLiveImage emoji;
@property (nonatomic) BOOL hasEmoji;
+ (id)descriptor;
@end
