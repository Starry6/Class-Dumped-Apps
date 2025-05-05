@interface CHSearchQueryItem : NSObject
@property (nonatomic) NSSet strokeIdentifiers;
- (unsigned long long)hash;
- (void).cxx_destruct;
- (id)description;
- (BOOL)isEqual:;
- (id)strokeIdentifiers;
- (id)initWithStrokeIdentifiers:;
- (BOOL)isEqualToSearchQueryItem:;
@end
