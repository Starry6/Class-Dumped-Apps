@interface BDInstallRequest : NSObject
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)requestURLString:params:needCommonParams:requestSerializer:responseSerializer:success:failure:;
@end
