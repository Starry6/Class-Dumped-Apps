@interface HTSLiveEmoji : IESLivePBBaseMessage
@property (nonatomic) q id_p;
@property (nonatomic) HTSLiveImage img;
@property (nonatomic) BOOL hasImg;
@property (nonatomic) q type;
@property (nonatomic) NSInteger status;
@property (nonatomic) q canDelTime;
@property (nonatomic) NSString rejectReason;
@property (nonatomic) NSString text;
@property (nonatomic) NSString idStr;
@property (nonatomic) q emojiScale;
@property (nonatomic) HTSLiveLabel label;
@property (nonatomic) BOOL hasLabel;
+ (id)descriptor;
@end
