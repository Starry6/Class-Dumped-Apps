@interface FlexActivity_SubTabConfig : IESLivePBBaseMessage
@property (nonatomic) NSString selectedBgURL;
@property (nonatomic) NSString unselectedBgURL;
@property (nonatomic) NSString textColor;
@property (nonatomic) NSString borderColor;
+ (id)descriptor;
@end
