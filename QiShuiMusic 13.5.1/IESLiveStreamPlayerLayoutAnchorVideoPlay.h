@interface IESLiveStreamPlayerLayoutAnchorVideoPlay : IESLiveStreamPlayerLayoutBase
@property (nonatomic) BOOL shouldUseCurrentType;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (unsigned long long)supportSeiTypes;
- (void)didSetAttachingDIContext;
- (BOOL)layoutWithMetaInfo:;
- (void)layoutWithPreviousType:;
- (void)onParseredWithSEIResult:;
- (void)setShouldUseCurrentType:;
- (BOOL)shouldUseCurrentLayoutType;
- (BOOL)shouldUseCurrentType;
- (id)supportRoomScenes;
@end
