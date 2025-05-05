@interface PageNameStyleInfo : IESLivePBBaseMessage
@property (nonatomic) PageNameStyle styleBeforeSelected;
@property (nonatomic) BOOL hasStyleBeforeSelected;
@property (nonatomic) PageNameStyle styleAfterSelected;
@property (nonatomic) BOOL hasStyleAfterSelected;
+ (id)descriptor;
@end
