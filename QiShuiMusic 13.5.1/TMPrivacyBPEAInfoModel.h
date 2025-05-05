@interface TMPrivacyBPEAInfoModel : NSObject
@property (nonatomic) NSString certToken;
@property (nonatomic) NSString entryToken;
@property (nonatomic) NSDictionary bpeaInfo;
- (id)bpeaInfo;
- (id)certToken;
- (id)entryToken;
- (id)initWithBPEAInfo:;
- (void)setBpeaInfo:;
- (void)setCertToken:;
- (void)setEntryToken:;
- (void).cxx_destruct;
- (id)jsonDict;
@end
