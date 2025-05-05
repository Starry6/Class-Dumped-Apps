@interface CXServiceDomain : NSObject
@property (nonatomic) NSString name;
@property (nonatomic) NSString machName;
- (id)machName;
- (id)initWithName:machName:;
- (void).cxx_destruct;
- (id)name;
+ (id)callKitServiceDomain;
@end
