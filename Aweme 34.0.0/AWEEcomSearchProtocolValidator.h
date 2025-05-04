@interface AWEEcomSearchProtocolValidator : NSObject
@property (nonatomic) NSMutableDictionary infoMap;
- (id)infoMap;
- (void)setInfoMap:;
- (BOOL)checkObject:conformProtocol:;
- (void).cxx_destruct;
+ (BOOL)checkObject:conformProtocol:;
+ (id)sharedValidator;
@end
