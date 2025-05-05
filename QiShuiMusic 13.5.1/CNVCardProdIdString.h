@interface CNVCardProdIdString : NSObject
+ (id)defaultLanguage;
+ (id)stringForCurrentBuild;
+ (id)stringWithProduct:version:language:;
@end
