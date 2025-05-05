@interface CUINamedRenditionInfo : NSObject
- (id)archivedData;
- (void)clearAttributePresent:withValue:;
- (BOOL)contentEqualForAttribute:withRenditionInfo:;
- (void)dealloc;
- (BOOL)contentPresentForAttribute:;
- (id)bitwiseAndWith:;
- (int)attributePresent:withValue:;
- (void)incrementIndex:inValues:forAttribute:;
- (BOOL)diverseContentPresentForAttribute:;
- (id)bitwiseOrWith:forAttribute:;
- (void)setAttributePresent:withValue:;
- (id)debugDescription;
- (unsigned short)getValueOfAttribute:;
- (unsigned short)getClosestValueOfAttribute:withValue:;
- (unsigned long long)numberOfBitsSet;
- (id)description;
- (id)initWithKeyFormat:andPlatform:;
- (id)initWithData:keyFormat:andPlatform:;
- (void)decrementValue:forAttribute:;
- (BOOL)isEqualToNamedRenditionInfo:;
- (BOOL)isEqual:;
- (id)copyWithZone:;
+ (int)subtypeFromIndexWithPlatform:andIndex:;
+ (int)subtypeToIndexWithPlatform:andInput:;
@end
