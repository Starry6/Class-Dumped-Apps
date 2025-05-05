@interface IOSClientComponent : IESLivePBBaseMessage
@property (nonatomic) NSMutableArray fragmentsArray;
@property (nonatomic) Q fragmentsArray_Count;
@property (nonatomic) NSMutableArray landscapeLayoutArray;
@property (nonatomic) Q landscapeLayoutArray_Count;
@property (nonatomic) NSMutableArray portraitLayoutArray;
@property (nonatomic) Q portraitLayoutArray_Count;
@property (nonatomic) BOOL isOpen;
@property (nonatomic) q templateId;
+ (id)descriptor;
@end
