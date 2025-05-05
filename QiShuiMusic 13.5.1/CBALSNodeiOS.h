@interface CBALSNodeiOS : NSObject
@property (nonatomic) ^{__IOHIDServiceClient=} alsService;
@property (nonatomic) CBALSEvent currentALSEvent;
@property (nonatomic) NSInteger orientation;
- (BOOL)handleALSEvent:;
- (void)dealloc;
- (id)initWithALSServiceClient:;
- (id)currentALSEvent;
- (int)orientation;
- (void)initALSProperties;
- (BOOL)conformsToHIDServiceClient:;
- (void)setAlsService:;
- (void)setCurrentALSEvent:;
- (BOOL)isColorSupported;
- (id)alsService;
- (void)setOrientation:;
@end
