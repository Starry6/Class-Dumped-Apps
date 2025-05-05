@interface PRModification : NSObject
- (id)range;
- (unsigned long long)modificationType;
- (id)replacementString;
- (id)syllableRange;
- (id)additionalSyllableRange;
- (double)modificationScore;
@end
