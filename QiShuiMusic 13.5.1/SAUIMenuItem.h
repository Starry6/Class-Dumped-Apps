@interface SAUIMenuItem : SAAceView
@property (nonatomic) NSArray commands;
@property (nonatomic) NSURL icon;
@property (nonatomic) NSURL ref;
@property (nonatomic) NSString subtitle;
@property (nonatomic) NSString title;
- (id)groupIdentifier;
- (id)icon;
- (void)setSubtitle:;
- (void)setTitle:;
- (id)commands;
- (id)title;
- (id)encodedClassName;
- (void)setIcon:;
- (id)subtitle;
- (void)setCommands:;
- (id)ref;
- (void)setRef:;
+ (id)menuItem;
+ (id)menuItemWithDictionary:context:;
@end
