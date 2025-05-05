@interface PanelTab : IESLivePBBaseMessage
@property (nonatomic) NSString tabName;
@property (nonatomic) NSMutableArray listArray;
@property (nonatomic) Q listArray_Count;
@property (nonatomic) NSString tagText;
@property (nonatomic) q tagVersion;
+ (id)descriptor;
@end
