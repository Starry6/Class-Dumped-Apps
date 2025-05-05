@interface HTSLiveVerticalTypeInfo : IESLivePBBaseMessage
@property (nonatomic) NSString name;
@property (nonatomic) q tabType;
@property (nonatomic) q tagId;
@property (nonatomic) BOOL isSubTag;
@property (nonatomic) HTSLiveImage icon;
@property (nonatomic) BOOL hasIcon;
@property (nonatomic) q validTime;
@property (nonatomic) q priority;
@property (nonatomic) NSString extra;
@property (nonatomic) NSString eventExtra;
+ (id)descriptor;
@end
