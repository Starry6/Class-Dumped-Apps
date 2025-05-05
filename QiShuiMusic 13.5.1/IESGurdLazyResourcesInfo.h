@interface IESGurdLazyResourcesInfo : NSObject
@property (nonatomic) q status;
@property (nonatomic) Q packageSize;
@property (nonatomic) Q packageID;
- (void)setPackageSize:;
- (unsigned long long)packageSize;
- (void)setStatus:;
- (long long)status;
- (unsigned long long)packageID;
- (void)setPackageID:;
@end
