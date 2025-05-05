@interface UILocalizedIndexedCollation : NSObject
@property (nonatomic) NSArray sectionTitles;
@property (nonatomic) NSArray sectionIndexTitles;
- (long long)sectionForObject:collationStringSelector:;
- (void)dealloc;
- (id)initWithDictionary:;
- (id)sortedArrayFromArray:collationStringSelector:;
- (id)sectionTitles;
- (id)_kanaTranscriptionForString:;
- (id)transformedCollationStringForString:;
- (id)tokenizer;
- (void).cxx_destruct;
- (id)sectionIndexTitles;
- (long long)sectionForSectionIndexTitleAtIndex:;
+ (id)collationWithDictionary:;
+ (id)currentCollation;
@end
