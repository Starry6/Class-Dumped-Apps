@interface CNVCardDataAnalyzer : NSObject
+ (id)analyzeData:;
+ (BOOL)tryUTF8VCard:analysis:;
+ (BOOL)tryUTF16LEVCard:analysis:;
+ (BOOL)tryUTF16BEVCard:analysis:;
+ (BOOL)tryUTF16LEBOMVCard:analysis:;
+ (BOOL)tryUTF16BEBOMVCard:analysis:;
+ (BOOL)tryVCardEncoding:data:analysis:;
+ (BOOL)data:isVersion30WithPrefix:encoding:;
+ (BOOL)data:containsString:encoding:;
+ (BOOL)data:containsParam:value:encoding:;
+ (BOOL)tryUTF16WithByteOrderMarker:analysis:;
+ (BOOL)tryUTF16ByInferrence:analysis:;
+ (unsigned char)data:byteAtIndex:;
+ (BOOL)data:hasPrefix:;
+ (BOOL)data:containsSubdata:;
+ (id)data:byPrependingData:;
@end
