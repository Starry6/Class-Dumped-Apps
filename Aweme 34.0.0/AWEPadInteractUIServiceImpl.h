@interface AWEPadInteractUIServiceImpl : NSObject
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)aAWEPadModuleAdapter;
- (BOOL)enableMoreElement;
- (void)performAutoPlayFloatBtnLayoutUpdateWithRightContainer:block:;
- (void)performFeedPlayInteractionElementLayoutUpdateWithView:block:;
- (id)aAWEFeedDOUYINiPadModuleAdapter;
- (id)calculateAutoPlayFloatBtnLayoutWithRightContainer:;
- (id)moreElement;
+ (Class)aAWEPadModuleAdapterClass;
+ (Class)aAWEFeedDOUYINiPadModuleAdapterClass;
+ (id)sharedInstance;
@end
