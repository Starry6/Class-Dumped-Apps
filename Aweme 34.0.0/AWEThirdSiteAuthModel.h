@interface AWEThirdSiteAuthModel : MTLModel
@property (nonatomic) q status;
@property (nonatomic) BOOL isAuthorized;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)setIsAuthorized:;
- (BOOL)isAuthorized;
- (void)setStatus:;
- (long long)status;
+ (id)JSONKeyPathsByPropertyKey;
@end
