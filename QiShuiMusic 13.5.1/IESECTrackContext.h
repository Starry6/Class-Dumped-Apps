@interface IESECTrackContext : NSObject
@property (nonatomic) <IESECTrackBaseProtocol> baseParams;
@property (nonatomic) IESECOnceHelper onceHelper;
@property (nonatomic) BOOL openWithSaaS;
@property (nonatomic) IESECTrackBuilder builder;
- (id)baseParams;
- (id)initWithBaseParams:;
- (id)onceHelper;
- (BOOL)openWithSaaS;
- (void)setBaseParams:;
- (void)setOnceHelper:;
- (void)setOpenWithSaaS:;
- (void)updateBaseParams:;
- (id)builder;
- (void).cxx_destruct;
- (void)setBuilder:;
@end
