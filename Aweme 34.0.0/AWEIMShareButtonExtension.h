@interface AWEIMShareButtonExtension : NSObject
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)p_startFetchingTranspondModelsWithLastShareUserId:completeHandler:;
- (void)p_handleResultAvatars:lastShareUserId:completeHandler:;
- (id)getCanShareModel:lastShareUserId:;
- (void)getShareToIMAvatarImageWithCompleteHandler:;
@end
