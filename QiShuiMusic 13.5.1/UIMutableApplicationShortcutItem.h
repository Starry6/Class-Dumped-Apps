@interface UIMutableApplicationShortcutItem : UIApplicationShortcutItem
@property (nonatomic) Q activationMode;
@property (nonatomic) NSString type;
@property (nonatomic) NSString localizedTitle;
@property (nonatomic) NSString localizedSubtitle;
@property (nonatomic) UIApplicationShortcutIcon icon;
@property (nonatomic) NSDictionary userInfo;
@property (nonatomic) @ targetContentIdentifier;
- (id)copyWithZone:;
@end
