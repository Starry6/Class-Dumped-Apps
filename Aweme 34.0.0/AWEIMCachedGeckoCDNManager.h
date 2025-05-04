@interface AWEIMCachedGeckoCDNManager : AWEGeckoCDNManager
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)getImageWithName:forTheme:block:;
- (id)getImageWithName:block:;
- (id)getImageWithName:forTheme:;
- (id)getImageWithName:;
- (id)init;
+ (id)cdnDomain;
@end
