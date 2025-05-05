@interface PRPinyinModification : PRModification
- (void)dealloc;
- (unsigned long long)hash;
- (BOOL)isTemporary;
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
- (id)initWithRange:replacementString:modificationType:syllableRange:additionalSyllableRange:modificationScore:syllableCountScore:syllableLetters:producesPartialSyllable:isTemporary:;
- (id)initWithRange:replacementString:modificationType:syllableRange:additionalSyllableRange:modificationScore:;
- (id)initWithRange:replacementString:modificationType:syllableRange:modificationScore:syllableCountScore:syllableLetters:producesPartialSyllable:isTemporary:;
- (id)initWithRange:replacementString:modificationType:syllableRange:modificationScore:isTemporary:;
- (id)initWithRange:replacementString:modificationType:syllableRange:modificationScore:;
- (BOOL)_shouldAppendLetter:romanization:;
+ (id)modificationsForInputString:;
+ (id)finalModificationsForInputString:;
@end
