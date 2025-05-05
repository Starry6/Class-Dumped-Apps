@interface IESECTabKitInterceptCloseConfig : NSObject
@property (nonatomic) Q tabID;
@property (nonatomic) BOOL enableInterceptClose;
@property (nonatomic) Q interceptCloseTimeout;
@property (nonatomic) Q interceptCloseAction;
- (BOOL)enableInterceptClose;
- (unsigned long long)interceptCloseAction;
- (unsigned long long)interceptCloseTimeout;
- (void)setEnableInterceptClose:;
- (void)setInterceptCloseAction:;
- (void)setInterceptCloseTimeout:;
- (void)setTabID:;
- (id)copyWithZone:;
- (unsigned long long)tabID;
@end
