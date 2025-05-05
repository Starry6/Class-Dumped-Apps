@interface WBSFileLockFactoryPOSIX : NSObject
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)lockURL:error:;
- (id)coordinationLockURL:;
@end
