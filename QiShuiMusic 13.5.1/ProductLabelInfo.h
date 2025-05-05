@interface ProductLabelInfo : IESLivePBBaseMessage
@property (nonatomic) NSString leftText;
@property (nonatomic) NSString rightText;
@property (nonatomic) NSInteger fontSize;
@property (nonatomic) NSString fontColor;
@property (nonatomic) NSString borderColor;
@property (nonatomic) BOOL dividingLine;
@property (nonatomic) NSInteger labelType;
@property (nonatomic) NSMutableArray leftIconListArray;
@property (nonatomic) Q leftIconListArray_Count;
+ (id)descriptor;
@end
