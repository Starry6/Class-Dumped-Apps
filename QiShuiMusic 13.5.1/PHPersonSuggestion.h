@interface PHPersonSuggestion : NSObject
@property (nonatomic) PHFace keyFace;
@property (nonatomic) PHPerson person;
@property (nonatomic) BOOL confirmed;
- (BOOL)confirmed;
- (void).cxx_destruct;
- (id)person;
- (id)initWithKeyFace:person:confirmed:;
- (id)keyFace;
@end
