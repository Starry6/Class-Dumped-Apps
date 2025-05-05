@interface SFSectionCustomizationItem : NSObject
@property (nonatomic) @ identifier;
@property (nonatomic) NSString title;
@property (nonatomic) UIImage icon;
@property (nonatomic) BOOL enabled;
- (id)icon;
- (id)identifier;
- (id)title;
- (void).cxx_destruct;
- (id)description;
- (BOOL)isEnabled;
- (id)itemWithEnabled:;
+ (id)itemWithIdentifier:title:icon:enabled:;
+ (id)itemWithIdentifier:enabled:;
@end
