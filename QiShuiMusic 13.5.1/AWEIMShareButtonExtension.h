@interface AWEIMShareButtonExtension : NSObject
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)getCanShareModel:lastShareUserId:;
- (void)getShareToIMAvatarImageWithCompleteHandler:;
- (void)p_handleResultAvatars:lastShareUserId:completeHandler:;
- (void)p_startFetchingTranspondModelsWithLastShareUserId:completeHandler:;
@end
