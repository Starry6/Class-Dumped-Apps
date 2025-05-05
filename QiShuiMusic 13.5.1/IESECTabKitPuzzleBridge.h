@interface IESECTabKitPuzzleBridge : NSObject
@property (nonatomic) NSString method;
@property (nonatomic) Q authType;
@property (nonatomic) @? handler;
- (void)setAuthType:;
- (id)method;
- (void)setHandler:;
- (unsigned long long)authType;
- (id)handler;
- (void).cxx_destruct;
- (void)setMethod:;
+ (id)bridgeWithHandler:method:authType:;
@end
