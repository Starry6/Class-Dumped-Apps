@interface SASVInterpretationData : AceObject
@property (nonatomic) NSArray tokenDataList;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)groupIdentifier;
- (id)encodedClassName;
- (id)tokenDataList;
- (void)setTokenDataList:;
+ (id)interpretationData;
+ (id)interpretationDataWithDictionary:context:;
@end
