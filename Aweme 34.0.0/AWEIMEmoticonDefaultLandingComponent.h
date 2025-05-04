@interface AWEIMEmoticonDefaultLandingComponent : AWEIMComponentBase
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)componentDidMounted:;
- (id)defaultSelectionUniqueIDWithPageArray:;
- (id)eventThemeInfoUniqueIDWithWithPageArray:;
- (id)lastUsedThemeInfoUniqueId;
- (id)eventLandingKey;
@end
