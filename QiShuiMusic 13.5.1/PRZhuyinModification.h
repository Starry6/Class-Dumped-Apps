@interface PRZhuyinModification : PRModification
- (void)dealloc;
- (unsigned long long)hash;
- (id)range;
- (id)description;
- (unsigned long long)modificationType;
- (BOOL)isEqual:;
- (id)replacementString;
- (id)initWithRange:replacementString:modificationType:syllableRange:additionalSyllableRange:modificationScore:syllableCountScore:syllableLetters:producesPartialSyllable:;
- (id)initWithRange:replacementString:modificationType:syllableRange:modificationScore:syllableCountScore:syllableLetters:producesPartialSyllable:;
- (id)syllableRange;
- (id)additionalSyllableRange;
- (id)combinedSyllableRange;
- (double)modificationScore;
- (unsigned long long)syllableCountScore;
- (BOOL)producesPartialSyllable;
- (BOOL)_shouldAppendLetter:;
@end
