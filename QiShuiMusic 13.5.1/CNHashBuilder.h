@interface CNHashBuilder : NSObject
+ (unsigned long long)integerHash:;
+ (unsigned long long)pointerHash:;
+ (unsigned long long)objectHash:;
+ (unsigned long long)dictionaryHash:;
+ (unsigned long long)cgsizeHash:;
+ (unsigned long long)setHash:;
+ (unsigned long long)cgrectHash:;
+ (unsigned long long)unsignedIntegerHash:;
+ (unsigned long long)cgfloatHash:;
+ (unsigned long long)hashWithBlocks:;
+ (unsigned long long)boolHash:;
+ (unsigned long long)arrayHash:;
+ (unsigned long long)cgpointHash:;
+ (unsigned long long)orderedSetHash:;
@end
