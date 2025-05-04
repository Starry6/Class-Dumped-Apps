@interface AWEMusicResourceOfflineService : HTSService
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)cdnPathPart;
- (void)loadResourceName:;
- (id)sourcePathName:;
+ (void)_aweLazyRegisterLoadWhenDylibLoad;
@end
