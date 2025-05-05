@interface SGMatchedDetails : NSObject
- (id)init;
- (id)initWithCoder:;
- (unsigned long long)hash;
- (void)encodeWithCoder:;
- (void).cxx_destruct;
- (id)description;
- (BOOL)isEqual:;
- (id)copyWithZone:;
- (id)initWithContact:matchinfoData:tokens:;
- (void)_initilizeDictionariesFromTokenDetailMap:;
- (id)matchedDetailsForToken:;
- (id)tokensForDetail:;
- (void)_addToTokenDetailMap:token:detail:;
- (void)_processRawData:tokens:contact:tokenDetailMap:;
- (BOOL)isEqualToMatchedDetails:;
+ (BOOL)supportsSecureCoding;
+ (id)matchedDetailsWithContact:matchinfoData:tokens:;
+ (long long)tokensMatchedDetailTypeForContact:contactEntityId:detailEntityId:matchinfoData:tokens:;
+ (long long)tokenMatchedDetailTypeForContact:matchedDetailReader:phraseNumber:token:;
+ (long long)tokenMatchedDetailTypeForContact:contactEntityId:detailEntityId:matchedDetailReader:phraseNumber:token:;
@end
