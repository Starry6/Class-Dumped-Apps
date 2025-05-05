@interface HTSLiveTemplatePhotoJumpDetail : IESLivePBBaseMessage
@property (nonatomic) NSMutableArray templateListArray;
@property (nonatomic) Q templateListArray_Count;
@property (nonatomic) NSString templatePanelTitle;
@property (nonatomic) NSString photoPanelTitle;
@property (nonatomic) HTSLiveImage bgPhoto;
@property (nonatomic) BOOL hasBgPhoto;
+ (id)descriptor;
@end
