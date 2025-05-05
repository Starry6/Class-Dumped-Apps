@interface IESLiveInteractiveSignalConfig : NSObject
@property (nonatomic) Q scene;
@property (nonatomic) Q pathType;
@property (nonatomic) BOOL customSendSignal;
- (BOOL)customSendSignal;
- (id)initWithScene:pathType:;
- (id)mapBasePath;
- (void)setCustomSendSignal:;
- (id)subBasePath;
- (unsigned long long)subScene;
- (void)switchWithScene:pathType:;
- (void)setScene:;
- (Class)responseClass;
- (unsigned long long)scene;
- (unsigned long long)pathType;
- (void)setPathType:;
@end
