@interface AWEIMChatListModelActionModel : NSObject
@property (nonatomic) q reason;
@property (nonatomic) AWEIMChatListServiceModel serviceModel;
@property (nonatomic) AWEIMChatListServiceExtraModel extra;
- (void)setExtra:;
- (id)serviceModel;
- (void)setServiceModel:;
- (id)init;
- (id)extra;
- (void)setReason:;
- (void).cxx_destruct;
- (long long)reason;
@end
