@interface CSJETLogRequest : CSJAdNetworkRequest
@property (nonatomic) BOOL isV3Data;
@property (nonatomic) BOOL isCypher4;
- (id)generatedHeaderField;
- (BOOL)isCypher4;
- (BOOL)isV3Data;
- (id)requestHeaderFieldValueDictionary;
- (void)setIsCypher4:;
- (void)setIsV3Data:;
@end
