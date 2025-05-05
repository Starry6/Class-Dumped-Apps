@interface CJPayGeneralParamsManager : NSObject
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)i_getGeneralParamsWithQuery:delegate:;
- (void)p_getLatestParams:delegate:;
+ (void)registerComponents;
+ (id)defaultService;
@end
