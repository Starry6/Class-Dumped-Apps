@interface AWEXBridgePermissionService : NSObject
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)willPermission:beCheckedWithHander:;
- (void)willPermission:fireRequestWithHandler:context:;
@end
