@interface MFLocalizedMessageHeaders : MFMessageHeaders
- (id)markupString;
- (id)copyFormattedHeaderValueFromAddressList:;
- (void)appendHeaderMarkupForKey:value:toString:;
+ (id)localizedHeaders;
+ (id)localizedHeadersFromEnglishHeaders:;
+ (id)englishHeadersFromLocalizedHeaders:;
@end
