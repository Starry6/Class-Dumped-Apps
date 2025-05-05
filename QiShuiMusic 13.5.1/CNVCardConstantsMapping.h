@interface CNVCardConstantsMapping : NSObject
@property (nonatomic) NSDictionary mapping;
- (id)initWithMapping:;
- (id)invertedMapping;
- (void)setMapping:;
- (void).cxx_destruct;
- (id)mappedConstant:;
- (id)mapping;
+ (id)CNToVCardInstantMessageConstantsMapping;
+ (id)vCardToCNInstantMessageConstantsMapping;
+ (id)CNToVCardSocialProfileConstantsMapping;
+ (id)vCardToCNSocialProfileConstantsMapping;
@end
