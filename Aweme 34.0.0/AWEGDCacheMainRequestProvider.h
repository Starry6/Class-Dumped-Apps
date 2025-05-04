@interface AWEGDCacheMainRequestProvider : NSObject
@property (nonatomic) AWEGoodsDetailPageContext context;
@property (nonatomic) NSString bizCode;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)bizCode;
- (void)setBizCode:;
- (id)initWithContext:bizCode:;
- (BOOL)isJumpToMiddlePage:;
- (void)pageScheme:params:headers:cache:ditoRequestCreated:;
- (void)disasterPageScheme:path:params:headers:ditoRequestCreated:;
- (void)setContext:;
- (void).cxx_destruct;
- (id)context;
@end
