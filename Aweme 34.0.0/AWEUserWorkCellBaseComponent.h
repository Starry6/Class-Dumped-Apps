@interface AWEUserWorkCellBaseComponent : AWERLComponent2
@property (nonatomic) AWEAwemeModel data;
@property (nonatomic) AWEUserWorkCellContext context;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)buildVirtualView:;
- (void)setNeedsUpdate;
- (void)setData:;
- (void)setContext:;
- (void).cxx_destruct;
- (id)data;
- (id)initWithData:context:;
- (id)context;
@end
