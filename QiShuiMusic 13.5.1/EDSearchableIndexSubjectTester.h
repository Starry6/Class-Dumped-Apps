@interface EDSearchableIndexSubjectTester : NSObject
@property (nonatomic) NSArray fetchAttributes;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (BOOL)verifySearchableItem:againstExpectedData:;
- (id)transformDataForVerification:;
- (id)fetchAttributes;
- (id)expressionFromDataSamples:;
@end
