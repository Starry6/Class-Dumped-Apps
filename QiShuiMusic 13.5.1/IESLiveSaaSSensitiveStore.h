@interface IESLiveSaaSSensitiveStore : NSObject
@property (nonatomic) IESLiveSaaSSensitiveApi api;
@property (nonatomic) IESLiveSaaSLiveRoomModel roomModel;
@property (nonatomic) HTSEventContext eventContext;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)addSensitiveWord:completion:;
- (void)delSensitiveWord:completion:;
- (void)didSetAttachingDIContext;
- (id)initWithLiveRoom:;
- (void)requestSensitiveWord:;
- (id)roomModel;
- (void)setEventContext:;
- (void)setRoomModel:;
- (void)setup;
- (void).cxx_destruct;
- (id)eventContext;
- (id)api;
- (void)setApi:;
@end
