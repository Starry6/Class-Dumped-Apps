@interface AWECommerceRouter : HTSService
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
+ (void)transferToURLString:aweme:completion:;
+ (id)transitionWithURLString:aweme:;
+ (BOOL)transferToURLString:aweme:;
+ (BOOL)transferToAweme:urlStringWithFormat:;
+ (id)transition:withFormat:;
+ (BOOL)verifyIsAbnormalWithAweme:;
@end
