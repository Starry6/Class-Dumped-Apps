@interface MFMailMessageLibraryQueryTransformer : NSObject
@property (nonatomic) MFMessageCriterionConverter criterionConverter;
@property (nonatomic) EDMessagePersistence messagePersistence;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (long long)messageCriterionConverter:criterionTypeForKey:;
- (id)initWithMessagePersistence:;
- (id)messageCriterionConverter:expressionForConstantValue:withCriterionType:;
- (id)mailAccountForIdentifier:;
- (id)criterionConverter;
- (unsigned int)optionsForQuery:;
- (void).cxx_destruct;
- (void)setCriterionConverter:;
- (id)criterionForQuery:;
- (id)messagePersistence;
+ (id)log;
@end
