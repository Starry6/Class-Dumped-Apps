@interface HTSLivePreviewExposeData_PreviewSwitch : IESLivePBBaseMessage
@property (nonatomic) NSInteger title;
@property (nonatomic) NSInteger previewGuide;
@property (nonatomic) NSInteger dynamicLabel;
@property (nonatomic) NSInteger assistLabel;
@property (nonatomic) NSInteger extendArea;
+ (id)descriptor;
@end
