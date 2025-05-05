@interface FigResilientRemoteRoutingContextFactory : NSObject
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (int)copySystemMirroringContextWithAllocator:options:context:;
- (int)createControlChannelOnlyContextWithAllocator:options:context:;
- (int)copyAllAudioContexts:;
- (int)createPerAppSecondDisplayContextWithAllocator:options:context:;
- (int)copyDisplayMenuVideoContextWithAllocator:options:context:;
- (int)copySystemRemotePoolContextWithAllocator:options:context:;
- (int)createVideoContextWithAllocator:options:context:;
- (int)createRemoteMusicControllerContextWithAllocator:options:context:;
- (int)createAudioContextWithAllocator:options:context:;
- (int)copySystemAudioContextWithAllocator:options:context:;
- (int)copyContextForUUIDWithAllocator:options:context:;
- (int)copyDefaultContextWithAllocator:options:context:;
- (int)copySystemMusicContextWithAllocator:options:context:;
- (int)copySidePlayContextWithAllocator:options:context:;
@end
