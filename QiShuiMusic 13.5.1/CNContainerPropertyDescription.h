@interface CNContainerPropertyDescription : NSObject
@property (nonatomic) NSString key;
@property (nonatomic) BOOL isWritable;
@property (nonatomic) # valueClass;
- (Class)valueClass;
- (id)key;
- (BOOL)isWritable;
- (id)CNValueFromABValue:;
- (id)nilValue;
- (id)ABValueFromCNValue:;
- (BOOL)isValidValue:error:;
- (id)CNValueForContainer:;
- (void)setCNValue:onContainer:;
- (BOOL)isValue:equalToEmptyEquivalentOrValue:;
- (int)abPropertyID;
- (BOOL)isConvertibleABValue:;
- (id)ABValueForABSource:;
- (BOOL)setABValue:onABSource:error:;
@end
