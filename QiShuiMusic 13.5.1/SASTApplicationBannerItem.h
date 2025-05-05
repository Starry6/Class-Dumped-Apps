@interface SASTApplicationBannerItem : AceObject
@property (nonatomic) <SASTTemplateAction> action;
@property (nonatomic) NSString bundleId;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)groupIdentifier;
- (id)bundleId;
- (id)action;
- (void)setAction:;
- (id)encodedClassName;
- (void)setBundleId:;
+ (id)applicationBannerItem;
+ (id)applicationBannerItemWithDictionary:context:;
@end
