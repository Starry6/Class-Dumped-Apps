@interface IESLiveSaaSPBMatchChatInfo : GPBMessage
@property (nonatomic) IESLiveSaaSPBImage mainGroupIcon;
@property (nonatomic) BOOL hasMainGroupIcon;
@property (nonatomic) IESLiveSaaSPBImage mainGroupBackground;
@property (nonatomic) BOOL hasMainGroupBackground;
@property (nonatomic) IESLiveSaaSPBImage guestGroupIcon;
@property (nonatomic) BOOL hasGuestGroupIcon;
@property (nonatomic) IESLiveSaaSPBImage guestGroupBackground;
@property (nonatomic) BOOL hasGuestGroupBackground;
@property (nonatomic) NSMutableArray aggregateIconArray;
@property (nonatomic) Q aggregateIconArray_Count;
+ (id)descriptor;
@end
