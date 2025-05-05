@interface BDUGLuckyPrefetchCapabilityAdapter : NSObject
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
+ (BOOL)prefetchEnable;
+ (BOOL)prefetchEnableForH5;
+ (void)requestWithModel:completion:;
@end
