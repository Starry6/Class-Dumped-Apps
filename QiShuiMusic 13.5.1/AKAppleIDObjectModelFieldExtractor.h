@interface AKAppleIDObjectModelFieldExtractor : NSObject
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void).cxx_destruct;
- (id)initWithObjectModel:;
- (id)valueForFieldWithID:;
- (id)_valueForFieldWithID:inObjectModel:;
- (id)_valueForTextFieldFromPage:rowID:;
@end
