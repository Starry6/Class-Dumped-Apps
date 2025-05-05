@interface IESSaaSTIMOSenderProfile : NSObject
@property (nonatomic) NSString senderNickName;
@property (nonatomic) NSString senderPortrait;
@property (nonatomic) NSString basicExtInfo;
- (id)basicExtInfo;
- (id)senderNickName;
- (id)senderPortrait;
- (void)setBasicExtInfo:;
- (void)setSenderNickName:;
- (void)setSenderPortrait:;
- (void).cxx_destruct;
@end
