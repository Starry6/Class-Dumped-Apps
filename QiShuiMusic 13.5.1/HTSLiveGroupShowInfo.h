@interface HTSLiveGroupShowInfo : IESLivePBBaseMessage
@property (nonatomic) NSMutableArray groupShowUsersArray;
@property (nonatomic) Q groupShowUsersArray_Count;
@property (nonatomic) q descriptionStyle;
@property (nonatomic) NSString title;
@property (nonatomic) NSString subTitle;
@property (nonatomic) HTSLiveImage backgroundImage;
@property (nonatomic) BOOL hasBackgroundImage;
@property (nonatomic) q groupShowScene;
@property (nonatomic) BOOL isLiveShow;
@property (nonatomic) NSString toastText;
@property (nonatomic) BOOL isGroupShowAnchor;
+ (id)descriptor;
@end
