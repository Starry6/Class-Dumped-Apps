@interface BDXSCCSecureRiskInfo : NSObject
@property (nonatomic) Q level;
@property (nonatomic) NSString reason;
@property (nonatomic) BOOL canGoback;
@property (nonatomic) NSString blockStyle;
- (id)blockStyle;
- (BOOL)canGoback;
- (void)setBlockStyle:;
- (void)setCanGoback:;
- (void)setLevel:;
- (id)init;
- (unsigned long long)level;
- (id)reason;
- (void)setReason:;
- (void).cxx_destruct;
@end
