@interface CMContextConfigurationManager : NSObject
- (id)init;
- (void)dealloc;
- (void)disconnect;
- (void)connect;
- (void)writeContextConfiguration:withHandler:;
@end
