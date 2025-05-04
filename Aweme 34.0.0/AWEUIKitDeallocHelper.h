@interface AWEUIKitDeallocHelper : NSObject
@property (nonatomic) @? deallocAction;
- (id)initWithDeallocAction:;
- (void)dealloc;
- (void).cxx_destruct;
- (id)deallocAction;
- (void)setDeallocAction:;
@end
