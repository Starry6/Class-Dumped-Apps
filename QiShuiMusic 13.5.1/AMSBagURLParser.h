@interface AMSBagURLParser : NSObject
+ (id)_rangeofSubstringWithOpeningTag:closingTag:inString:;
+ (id)_firstVariableInTemplate:includeTags:;
+ (id)_rangeOfTemplateInURLString:;
+ (id)URLBySubstitutingVariablesInURLString:usingBlock:;
@end
