@interface AWEIMFTSSyncUserData : NSObject
@property (nonatomic) q optionType;
@property (nonatomic) NSString uid;
@property (nonatomic) NSString convId;
@property (nonatomic) NSArray convIds;
@property (nonatomic) AWEIMFTSChatModel chatModel;
- (id)convId;
- (void)setConvId:;
- (void)setOptionType:;
- (id)chatModel;
- (void)setChatModel:;
- (void)setConvIds:;
- (id)convIds;
- (void)setUid:;
- (id)uid;
- (void)encodeWithCoder:;
- (void).cxx_destruct;
- (id)initWithCoder:;
- (long long)optionType;
@end
