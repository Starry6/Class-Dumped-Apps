@interface AWELivePayDeskDelegate : NSObject
@property (nonatomic) @? openCallback;
@property (nonatomic) @? payCallback;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)callState:fromScene:;
- (void)onResponse:;
- (id)openCallback;
- (void)setOpenCallback:;
- (void)setPayCallback:;
- (unsigned long long)resultTypeWithErrorCode:;
- (id)payCallback;
- (id)initWithOpenCallback:payCallback:;
- (void).cxx_destruct;
@end
