@interface AWEStudioCommentModuleServiceImpl : HTSService
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)convertVideoCommentModelParamsForSwift:;
- (id)getACCVideoReplyModelFromInteractionStickersForSwift:aweme:;
- (void)generateStudioComment:configData:trackInfo:completion:;
- (id)obtainCommentEditComponentDescription;
@end
