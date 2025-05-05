@interface HTSLiveBadge : IESLivePBBaseMessage
@property (nonatomic) NSString text;
@property (nonatomic) HTSLiveImage icon;
@property (nonatomic) BOOL hasIcon;
@property (nonatomic) GPBInt64ObjectDictionary icons;
@property (nonatomic) Q icons_Count;
+ (id)descriptor;
@end
