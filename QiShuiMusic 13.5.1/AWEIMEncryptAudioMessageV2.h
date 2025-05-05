@interface AWEIMEncryptAudioMessageV2 : AWEIMAudioMessage
@property (nonatomic) AWEIMMessageContent<AWEIMMessageAudioContentProtocol> content;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)initWithContentDict:;
- (BOOL)isValidToDownload;
- (void)updateWithMessage:;
- (id)copyWithZone:;
@end
