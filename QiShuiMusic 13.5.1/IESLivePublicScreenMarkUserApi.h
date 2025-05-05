@interface IESLivePublicScreenMarkUserApi : HTSLiveApi
- (void)fetchUserInteractionRelationWithUserID:scene:completion:;
- (void)updateMarkUserStatusWithUserID:isCancel:completion:;
@end
