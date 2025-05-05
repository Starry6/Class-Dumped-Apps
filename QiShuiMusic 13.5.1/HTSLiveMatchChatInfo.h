@interface HTSLiveMatchChatInfo : IESLivePBBaseMessage
@property (nonatomic) HTSLiveImage mainGroupIcon;
@property (nonatomic) BOOL hasMainGroupIcon;
@property (nonatomic) HTSLiveImage mainGroupBackground;
@property (nonatomic) BOOL hasMainGroupBackground;
@property (nonatomic) HTSLiveImage guestGroupIcon;
@property (nonatomic) BOOL hasGuestGroupIcon;
@property (nonatomic) HTSLiveImage guestGroupBackground;
@property (nonatomic) BOOL hasGuestGroupBackground;
@property (nonatomic) NSMutableArray aggregateIconArray;
@property (nonatomic) Q aggregateIconArray_Count;
+ (id)descriptor;
@end
