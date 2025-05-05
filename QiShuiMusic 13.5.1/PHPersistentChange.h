@interface PHPersistentChange : NSObject
@property (nonatomic) PHPersistentChangeToken changeToken;
- (void).cxx_destruct;
- (id)changeToken;
- (id)initWithChange:;
- (id)changeDetailsForObjectType:error:;
@end
