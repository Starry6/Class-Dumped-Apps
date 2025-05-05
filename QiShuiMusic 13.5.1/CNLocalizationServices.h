@interface CNLocalizationServices : NSObject
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)localizedStringForKey:value:table:bundleForClass:comment:;
+ (id)defaultServices;
@end
