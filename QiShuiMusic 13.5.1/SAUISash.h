@interface SAUISash : AceObject
@property (nonatomic) NSString applicationBundleIdentifier;
@property (nonatomic) SAUIColor backgroundColor;
@property (nonatomic) NSArray commands;
@property (nonatomic) SAUIImageResource image;
@property (nonatomic) SAUIColor textColor;
@property (nonatomic) NSString title;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)applicationBundleIdentifier;
- (void)setBackgroundColor:;
- (id)groupIdentifier;
- (id)backgroundColor;
- (void)setImage:;
- (void)setTitle:;
- (id)commands;
- (void)setApplicationBundleIdentifier:;
- (id)title;
- (void)setTextColor:;
- (id)encodedClassName;
- (id)textColor;
- (void)setCommands:;
- (id)image;
+ (id)sash;
+ (id)sashWithDictionary:context:;
@end
