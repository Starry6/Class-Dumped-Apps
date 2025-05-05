@interface HTSLivePreviewExposeData_PreviewExtendArea_Part : IESLivePBBaseMessage
@property (nonatomic) NSInteger fontSize;
@property (nonatomic) NSInteger interval;
@property (nonatomic) NSString text;
@property (nonatomic) BOOL cuttable;
@property (nonatomic) BOOL deleted;
@property (nonatomic) NSString fontColor;
@property (nonatomic) BOOL bold;
+ (id)descriptor;
@end
