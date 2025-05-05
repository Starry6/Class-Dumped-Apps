@interface IESECListKitDeallocObserver : NSObject
@property (nonatomic) @? deallocCallback;
- (id)deallocCallback;
- (id)initWithDeallocCallback:;
- (void)setDeallocCallback:;
- (void)dealloc;
- (void).cxx_destruct;
@end
