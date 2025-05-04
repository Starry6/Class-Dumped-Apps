@interface AWEPublishReeditService : HTSService
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)aweme:didPublishWithTaskId:;
- (BOOL)isAwemeReeditable:;
- (BOOL)isAwemeExist:;
- (id)draftIdWithAwemeId:;
- (void)startReeditAweme:;
- (void)delayDeleteingDraft:;
- (BOOL)isAwemeExpiredWithId:;
- (id)storageKeyOf:;
- (BOOL)isSegment:;
- (void)removeExpiredData;
@end
