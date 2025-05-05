@interface INParameterContexts : NSObject
@property (nonatomic) NSDictionary _suggestedValuesDictionary;
@property (nonatomic) NSDictionary _typedSuggestedValuesDictionary;
@property (nonatomic) NSDictionary _operatorsDictionary;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (BOOL)_isEmpty;
- (void)_intents_decodeWithJSONDecoder:codableDescription:from:;
- (id)valueForUndefinedKey:;
- (void).cxx_destruct;
- (id)_intents_encodeWithJSONEncoder:codableDescription:;
- (id)_initWithIntent:decoder:JSONDictionary:;
- (void)_updateOperatorsForIntent:JSONDictionary:;
- (void)_updateSuggestedValuesForIntent:decoder:JSONDictionary:;
- (id)_suggestedValuesDictionary;
- (void)_setSuggestedValuesDictionary:;
- (id)_typedSuggestedValuesDictionary;
- (void)_setTypedSuggestedValuesDictionary:;
- (id)_operatorsDictionary;
- (void)_setOperatorsDictionary:;
+ (id)_intents_decodeWithJSONDecoder:codableDescription:from:;
@end
