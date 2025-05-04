@interface AWEECSingleGoodsCardService : HTSService
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (BOOL)shouldShowSingleCardViewWithModel:;
- (void)prefetchGoodsModelWithModel:sourcePage:;
@end
