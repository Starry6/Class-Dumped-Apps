@interface NSCountableTextLocation : NSObject
@property (nonatomic) Q characterIndex;
@property (nonatomic) BOOL endOfDocument;
@property (nonatomic) NSString type;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (unsigned long long)hash;
- (id)debugDescription;
- (id)initWithIndex:;
- (id)type;
- (BOOL)isEndOfDocument;
- (long long)compare:;
- (BOOL)isEqualToTextLocation:;
- (id)description;
- (unsigned long long)characterIndex;
- (BOOL)isEqual:;
+ (id)endOfDocumentLocation;
@end
