@interface MPHSBrowserDelegate : NSObject
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)browser:didRemoveLibrary:;
- (void)browser:didAddLibrary:;
@end
