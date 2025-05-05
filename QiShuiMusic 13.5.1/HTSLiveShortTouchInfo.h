@interface HTSLiveShortTouchInfo : IESLivePBBaseMessage
@property (nonatomic) NSString shortTouchURL;
@property (nonatomic) NSString shortTouchFallbackURL;
@property (nonatomic) NSInteger containerType;
@property (nonatomic) I width;
@property (nonatomic) I height;
@property (nonatomic) NSString imgURL;
@property (nonatomic) NSString jumpSchema;
@property (nonatomic) NSInteger showAnimation;
@property (nonatomic) NSInteger animationType;
@property (nonatomic) NSMutableArray subItemListArray;
@property (nonatomic) Q subItemListArray_Count;
@property (nonatomic) HTSLiveShortTouchImageLayers imgLayers;
@property (nonatomic) BOOL hasImgLayers;
@property (nonatomic) I animationQuota;
+ (id)descriptor;
@end
