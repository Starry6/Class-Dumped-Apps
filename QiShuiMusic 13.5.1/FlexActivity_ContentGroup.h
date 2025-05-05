@interface FlexActivity_ContentGroup : IESLivePBBaseMessage
@property (nonatomic) NSString subTitle;
@property (nonatomic) FlexActivity_Content content;
@property (nonatomic) BOOL hasContent;
+ (id)descriptor;
@end
