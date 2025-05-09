@interface CNiOSABConstantsMapping : NSObject
@property (nonatomic) NSDictionary mapping;
@property (nonatomic) @ defaultConstant;
- (id)initWithMapping:;
- (id)invertedMapping;
- (void)setMapping:;
- (void)setDefaultConstant:;
- (void).cxx_destruct;
- (id)mappedConstant:;
- (id)mapping;
- (id)defaultConstant;
+ (id)ABtoCNContactDisplayNameOrderConstantsMapping;
+ (id)CNToABPersonKindConstantsMapping;
+ (id)CNToABPersonInstantMessageConstantsMapping;
+ (id)ABToCNPersonAddressConstantsMapping;
+ (id)CNToABPersonAddressConstantsMapping;
+ (id)ABToCNContactSortOrderConstantsMapping;
+ (id)ABToCNContactShortNameFormatConstantsMapping;
+ (id)ABToCNPersonKindConstantsMapping;
+ (id)ABToCNLabelConstantsMapping;
+ (id)CNToABLabelConstantsMapping;
+ (id)ABToCNPersonSocialProfileConstantsMapping;
+ (id)ABToCNContainerTypeConstantsMapping;
+ (id)CNToABPersonSortOrderingConstantsMapping;
+ (id)CNToABSourceTypeConstantsMapping;
+ (id)ABToCNPersonInstantMessageConstantsMapping;
+ (id)CNToABCompositeNameFormatConstantsMapping;
+ (id)CNToABPersonSocialProfileConstantsMapping;
+ (id)CNToABPersonShortNameFormatConstantsMapping;
@end
