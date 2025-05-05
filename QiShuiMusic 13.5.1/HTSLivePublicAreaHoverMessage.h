@interface HTSLivePublicAreaHoverMessage : IESLivePBBaseMessage
@property (nonatomic) HTSLiveCommon common;
@property (nonatomic) BOOL hasCommon;
@property (nonatomic) HTSLivePublicAreaCommon publicAreaCommon;
@property (nonatomic) BOOL hasPublicAreaCommon;
@property (nonatomic) NSString mainContent;
@property (nonatomic) NSString secondaryContent;
@property (nonatomic) HTSLiveImage hoverIcon;
@property (nonatomic) BOOL hasHoverIcon;
@property (nonatomic) NSInteger hoverHeight;
@property (nonatomic) NSString scene;
@property (nonatomic) NSInteger priority;
+ (id)descriptor;
@end
