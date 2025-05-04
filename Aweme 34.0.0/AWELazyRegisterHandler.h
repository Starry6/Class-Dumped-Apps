@interface AWELazyRegisterHandler : NSObject
@property (nonatomic) NSValue handlerPointer;
@property (nonatomic) BOOL registed;
@property (nonatomic) Q reserved;
- (id)handlerPointer;
- (void)setHandlerPointer:;
- (BOOL)registed;
- (void)setRegisted:;
- (unsigned long long)reserved;
- (void)setReserved:;
- (void).cxx_destruct;
@end
