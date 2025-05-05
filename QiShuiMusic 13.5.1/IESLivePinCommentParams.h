@interface IESLivePinCommentParams : NSObject
@property (nonatomic) NSString nickName;
@property (nonatomic) NSString content;
@property (nonatomic) NSString mixUserId;
@property (nonatomic) q eventId;
@property (nonatomic) NSString contentType;
@property (nonatomic) q msgId;
@property (nonatomic) NSString scene;
- (id)mixUserId;
- (void)setMixUserId:;
- (void)setContentType:;
- (id)content;
- (void)setContent:;
- (void)setScene:;
- (id)contentType;
- (id)scene;
- (id)nickName;
- (void).cxx_destruct;
- (void)setNickName:;
- (long long)msgId;
- (void)setMsgId:;
- (long long)eventId;
- (void)setEventId:;
@end
