@interface AWEStudioImageDetectServiceImpl : HTSService
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)createInputData;
- (void)detect:completion:;
- (BOOL)isRunning;
@end
