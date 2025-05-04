@interface AWEFormatProfileService : HTSService
@property (nonatomic) AWEFormatProfileServiceSwift service;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)openProfileCardWithOwner:conversationId:enterSource:params:;
- (void)openProfileCardWithOwnerUserId:nickname:conversationId:enterSource:params:;
- (void)openProfileCardWithAISecUid:conversationId:enterSource:params:;
- (void)openProfileCardWithRoomInfo:conversationId:enterSource:params:;
- (void)openProfileCardWithAISecUid:owner:conversationId:enterSource:params:;
- (void)transferToProfileCard:conversationId:enterSource:params:;
- (void)openProfileCardWithAISecUid:option:conversationId:enterSource:params:;
- (BOOL)hasFormatData:;
- (void)routeToProfileCard:isInFormat:conversationId:routeType:params:;
- (BOOL)enableNativeProfileCard;
- (id)newProfileCardSchema:type:params:;
- (BOOL)canShowFormat:;
- (id)service;
- (void)setService:;
- (void).cxx_destruct;
@end
