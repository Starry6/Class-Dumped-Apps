@interface HTSLiveDriveBagItem : IESLivePBBaseMessage
@property (nonatomic) HTSLiveDriveItem item;
@property (nonatomic) BOOL hasItem;
@property (nonatomic) q nextExpire;
@property (nonatomic) BOOL equipped;
+ (id)descriptor;
@end
