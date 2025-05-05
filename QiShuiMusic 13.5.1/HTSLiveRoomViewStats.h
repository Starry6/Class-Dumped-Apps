@interface HTSLiveRoomViewStats : IESLivePBBaseMessage
@property (nonatomic) BOOL isHidden;
@property (nonatomic) NSString displayShort;
@property (nonatomic) NSString displayMiddle;
@property (nonatomic) NSString displayLong;
@property (nonatomic) q displayValue;
@property (nonatomic) q displayVersion;
@property (nonatomic) BOOL incremental;
@property (nonatomic) NSInteger displayType;
@property (nonatomic) NSString displayShortAnchor;
@property (nonatomic) NSString displayMiddleAnchor;
@property (nonatomic) NSString displayLongAnchor;
+ (id)descriptor;
@end
