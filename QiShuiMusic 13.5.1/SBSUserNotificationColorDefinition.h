@interface SBSUserNotificationColorDefinition : NSObject
@property (nonatomic) BSColor color;
@property (nonatomic) NSString colorName;
- (id)_initWithDictionary:;
- (id)colorName;
- (id)build;
- (id)color;
- (void).cxx_destruct;
- (id)copyWithZone:;
- (id)_stringForColor:;
- (id)_initWithColorName:color:;
- (id)_colorForString:;
+ (id)definitionWithColorName:;
+ (id)definitionWithColor:;
@end
