@interface ToolbarPermutation : IESLivePBBaseMessage
@property (nonatomic) ToolbarPermutation_Rule vertical;
@property (nonatomic) BOOL hasVertical;
@property (nonatomic) ToolbarPermutation_Rule landscape;
@property (nonatomic) BOOL hasLandscape;
@property (nonatomic) ToolbarPermutation_Rule general;
@property (nonatomic) BOOL hasGeneral;
+ (id)descriptor;
@end
