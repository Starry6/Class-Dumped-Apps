@interface HTSLiveProfileCardPreviewButton : IESLivePBBaseMessage
@property (nonatomic) BOOL enable;
@property (nonatomic) NSString text;
@property (nonatomic) NSString textColor;
@property (nonatomic) NSString bgColor;
@property (nonatomic) NSString schema;
+ (id)descriptor;
@end
