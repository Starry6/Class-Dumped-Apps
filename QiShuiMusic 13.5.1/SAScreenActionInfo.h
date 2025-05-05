@interface SAScreenActionInfo : SADomainObject
@property (nonatomic) NSString elementId;
@property (nonatomic) NSArray examples;
@property (nonatomic) NSString language;
@property (nonatomic) NSString semanticData;
@property (nonatomic) NSURL semanticId;
@property (nonatomic) NSURL type;
@property (nonatomic) NSString value;
- (id)groupIdentifier;
- (void)setLanguage:;
- (id)language;
- (void)setType:;
- (void)setValue:;
- (id)type;
- (id)encodedClassName;
- (id)value;
- (id)examples;
- (void)setExamples:;
- (id)elementId;
- (void)setElementId:;
- (id)semanticData;
- (void)setSemanticData:;
- (id)semanticId;
- (void)setSemanticId:;
+ (id)info;
+ (id)infoWithDictionary:context:;
@end
