@interface AWEDataLayerNetworkImpl : NSObject
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)requestWithMethod:URLString:params:headerFields:config:completion:;
- (long long)dataSizeFromModel:;
+ (id)sharedImpl;
@end
