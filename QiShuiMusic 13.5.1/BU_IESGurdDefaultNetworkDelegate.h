@interface BU_IESGurdDefaultNetworkDelegate : NSObject
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)downloadPackageWithURLString:completion:;
- (void)requestWithMethod:URLString:params:completion:;
@end
