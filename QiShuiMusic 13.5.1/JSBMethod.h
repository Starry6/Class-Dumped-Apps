@interface JSBMethod : NSObject
@property (nonatomic) @? handler;
@property (nonatomic) NSString method;
@property (nonatomic) Q authType;
- (id)initWithHanlder:forMethod:authType:;
- (void)setAuthType:;
- (id)method;
- (void)setHandler:;
- (unsigned long long)authType;
- (id)handler;
- (void).cxx_destruct;
- (void)setMethod:;
@end
