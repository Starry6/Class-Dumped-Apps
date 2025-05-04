@interface AWEAdDynamicFlashManager : HTSService
@property (nonatomic) NSTimer dynamicTimer;
@property (nonatomic) NSMutableArray blockArray;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
@property (nonatomic) <AWECommerceComponentContext> commerceContext;
- (id)commerceContext;
- (void)setCommerceContext:;
- (id)blockArray;
- (void)setBlockArray:;
- (void)dynamicFlash:;
- (void)setDynamicTimer:;
- (id)dynamicTimer;
- (id)getCurrentPixelPlayerImageWithContext;
- (id)getLightColorList:;
- (BOOL)setupTimer:block:;
- (id)getDynamicColor;
- (void)setModel:;
- (void).cxx_destruct;
- (void)reset;
+ (BOOL)canShowComponentWithContext:;
@end
