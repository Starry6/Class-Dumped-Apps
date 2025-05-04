@interface AWEIMFTSSyncConversationData : NSObject
@property (nonatomic) q optionType;
@property (nonatomic) NSString convId;
@property (nonatomic) NSArray deletedConvIds;
- (id)convId;
- (void)setConvId:;
- (void)setOptionType:;
- (void)setDeletedConvIds:;
- (id)deletedConvIds;
- (void)encodeWithCoder:;
- (void).cxx_destruct;
- (id)initWithCoder:;
- (long long)optionType;
@end
