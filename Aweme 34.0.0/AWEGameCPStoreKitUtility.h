@interface AWEGameCPStoreKitUtility : NSObject
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)trackWithAwemeModel:scene:btnType:actionType:referString:location:extra:;
- (void)trackUsingStoreKitWithAwemeModel:scene:btnType:actionType:referString:location:extra:;
+ (id)util;
@end
