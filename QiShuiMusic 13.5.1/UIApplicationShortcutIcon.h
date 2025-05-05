@interface UIApplicationShortcutIcon : NSObject
@property (nonatomic) SBSApplicationShortcutIcon sbsShortcutIcon;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)encodeWithXPCDictionary:;
- (unsigned long long)hash;
- (id)initWithXPCDictionary:;
- (id)sbsShortcutIcon;
- (void).cxx_destruct;
- (id)initWithSBSApplicationShortcutIcon:;
- (BOOL)isEqual:;
- (id)copyWithZone:;
+ (id)iconWithContact:;
+ (id)iconWithTemplateImageName:;
+ (id)iconWithSystemImageName:;
+ (id)iconWithType:;
+ (id)iconWithCustomImage:;
+ (id)iconWithCustomImage:isTemplate:;
@end
