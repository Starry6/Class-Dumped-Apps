@interface AWEPublishEditServiceManager : NSObject
@property (nonatomic) ACCThreadSafeMutableDictionary usedServiceDict;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)enqueueEditService:useScene:;
- (void)dequeueEditServiceWithWorkspace:index:useScene:completion:;
- (void)setUsedServiceDict:;
- (id)usedKeyOfEditServiceWithIndex:projectUUID:;
- (void)removeEditServiceIfNeededWithCurrentIndex:currentUsedKey:;
- (id)fetchAvailableServiceWithIndex:projectUUID:useScene:;
- (id)usedServiceDict;
- (void)applyPublishCanvasStateWithProject:;
- (void)removeEditServices;
- (id)init;
- (void)dealloc;
- (void).cxx_destruct;
@end
