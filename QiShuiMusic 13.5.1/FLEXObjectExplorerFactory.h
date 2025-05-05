@interface FLEXObjectExplorerFactory : NSObject
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
+ (id)explorerViewControllerForObject:;
+ (void)registerExplorerSection:forClass:;
+ (id)globalsEntryTitle:;
+ (id)globalsEntryViewController:;
+ (id)globalsEntryRowAction:;
@end
