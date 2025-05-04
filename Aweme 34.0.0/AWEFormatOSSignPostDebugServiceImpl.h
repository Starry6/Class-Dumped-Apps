@interface AWEFormatOSSignPostDebugServiceImpl : NSObject
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)initOSSignPostEnv;
- (void)startStringEvent:;
- (void)endStringEvent:;
- (id)init;
- (void)dealloc;
- (void)endEvent:;
- (void)startEvent:;
@end
