@interface HTSLiveMicDressButton_ButtonInfo : IESLivePBBaseMessage
@property (nonatomic) NSString toast;
@property (nonatomic) BOOL disable;
@property (nonatomic) NSString schema;
@property (nonatomic) BOOL clickToNext;
+ (id)descriptor;
@end
