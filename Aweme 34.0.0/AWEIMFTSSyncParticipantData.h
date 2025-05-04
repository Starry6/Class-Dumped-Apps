@interface AWEIMFTSSyncParticipantData : NSObject
@property (nonatomic) q optionType;
@property (nonatomic) NSArray uids;
@property (nonatomic) NSArray convIds;
- (void)setOptionType:;
- (void)setConvIds:;
- (id)convIds;
- (void)encodeWithCoder:;
- (void).cxx_destruct;
- (id)initWithCoder:;
- (void)setUids:;
- (id)uids;
- (long long)optionType;
@end
