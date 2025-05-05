@interface HTSLivePreviewExposeData_PreviewGuide : IESLivePBBaseMessage
@property (nonatomic) HTSLiveImage icon;
@property (nonatomic) BOOL hasIcon;
@property (nonatomic) NSString tip;
@property (nonatomic) q type;
@property (nonatomic) NSMutableArray rollTipsArray;
@property (nonatomic) Q rollTipsArray_Count;
@property (nonatomic) q couponMateId;
@property (nonatomic) q userTagGetCoin;
@property (nonatomic) q liveMessionStyle;
@property (nonatomic) NSString etType;
@property (nonatomic) NSString extra;
@property (nonatomic) NSMutableDictionary etExtra;
@property (nonatomic) Q etExtra_Count;
+ (id)descriptor;
@end
