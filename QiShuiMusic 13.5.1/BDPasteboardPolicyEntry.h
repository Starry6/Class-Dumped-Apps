@interface BDPasteboardPolicyEntry : BDPrivacyCertEntry
+ (id)URLWithPolicy:error:;
+ (id)URLsWithPolicy:error:;
+ (id)colorWithPolicy:error:;
+ (id)colorsWithPolicy:error:;
+ (id)dataForPasteboardtype:inItemSet:withPolicy:error:;
+ (id)dataForPasteboardtype:withPolicy:error:;
+ (id)imageWithPolicy:error:;
+ (id)imagesWithPolicy:error:;
+ (id)itemsWithPolicy:error:;
+ (void)setColor:withPolicy:error:;
+ (void)setColors:withPolicy:error:;
+ (void)setData:forPasteboardType:withPolicy:error:;
+ (void)setImage:withPolicy:error:;
+ (void)setImages:withPolicy:error:;
+ (void)setItems:options:withPolicy:error:;
+ (void)setItems:withPolicy:error:;
+ (void)setString:withPolicy:error:;
+ (void)setStrings:withPolicy:error:;
+ (void)setURL:withPolicy:error:;
+ (void)setURLs:withPolicy:error:;
+ (void)setValue:forPasteboardType:withPolicy:error:;
+ (id)stringWithPolicy:error:;
+ (id)stringsWithPolicy:error:;
+ (id)valuesForPasteboardtype:inItemSet:withPolicy:error:;
@end
