@interface CNCompoundMultiValuePropertyDescription : CNMultiValuePropertyDescription
@property (nonatomic) @? dictionaryTransform;
@property (nonatomic) @? fromDictionaryTransform;
@property (nonatomic) NSArray summarizationKeys;
- (id)fromPlistTransform;
- (id)stringForIndexingForContact:;
- (id)plistTransform;
- (id)dictionaryTransform;
- (id)fromDictionaryTransform;
- (id)summarizationKeys;
@end
